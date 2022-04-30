import re
p = re.compile('[a-z]+')

m = p.search('python')
print(m) # <re.Match object; span=(0, 6), match='python'>
print(m.group()) # python

m = p.search('123 python ehlfjkdjljklfdj')
print(m)
print(m.group()) # a-z에 해당되는 것을 발견하기 때문에, 123을 제외하고 다음 문자열을 보여준다.
