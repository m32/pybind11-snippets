#include <iostream>
#include "mysystem.h"

int g_counter = 0;

void foo(int i)
{
  std::cout << i << std::endl;
  g_counter++;
}

int main()
{
  System s;
  s.registerCallback(foo);
  s.start();
  while (g_counter < 3)
  {
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
  }
  s.stop();
  return 0;
}
