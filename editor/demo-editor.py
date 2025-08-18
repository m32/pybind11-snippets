import fredbuf
builder = fredbuf.TreeBuilder()

import io
fp = io.BytesIO('''\
ąćęłńóśżź
CopyData 1 żółty1 żółty 2
2 CopyData ażółty
żółty abc CopyData1 CopyData
ĄĆĘŁŃÓŚŻŹ'''.encode('utf-8'))
while True:
    b = fp.read(4096)
    if not b:
        break
    builder.accept(b)
tree = builder.create()

print('length', tree.length(), tree.line_count(), tree.line_feed_count())

import re
s = br'\b'+('żółty'.encode('utf-8'))+br'\b'
s = br'\s*'+'żółty'.encode('utf-8')+br'\b'
print(s)
pat = re.compile(s)
for lno in range(1, tree.line_count()+1):
    line = tree.get_line_content(lno)
    sline = tree.get_line_content_string(lno)
    m = pat.search(line)
    print(f'lno:{lno} line={line} sline={sline} m={m}', re.findall(s, line))

with open('output', 'wb') as fp:
    tree.data(fp.write)
