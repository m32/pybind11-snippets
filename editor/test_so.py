import time

import fredbuf
builder = fredbuf.TreeBuilder()

t0 = time.time()
with open('fredbuf.so', 'rb') as fp:
    while True:
        b = fp.read(4096)
        if not b:
            break
        builder.accept(b)
    fp.close()
t1 = time.time()
tree = builder.create()
t2 = time.time()

print('length', tree.length(), tree.line_count(), tree.line_feed_count())

t3 = time.time()
with open('output', 'wb') as fp:
    tree.data(fp.write)
t4 = time.time()

print(f'timed: read={t1-t0} build={t2-t1} write={t4-t3}')
