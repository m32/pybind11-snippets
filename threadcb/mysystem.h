/*
https://stackoverflow.com/questions/60410178/how-to-invoke-python-function-as-a-callback-inside-c-thread-using-pybind11
*/

#pragma once

#include <atomic>
#include <chrono>
#include <functional>
#include <thread>

class System
{
public:
  using Callback = std::function<void(int)>;
  System(): t_(), cb_(), stop_(true) {}
  ~System()
  {
    stop();
  }
  bool start()
  {
    if (t_.joinable()) return false;
    stop_ = false;
    t_ = std::thread([this]()
    {
      while (!stop_)
      {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        if (cb_) cb_(1234);
      }
    });
    return true;
  }
  bool stop()
  {
    if (!t_.joinable()) return false;
    stop_ = true;
    t_.join();
    return true;
  }
  bool registerCallback(Callback cb)
  {
    if (t_.joinable()) return false;
    cb_ = cb;
    return true;
  }

private:
  std::thread t_;
  Callback cb_;
  std::atomic_bool stop_;
};

