import re
p = re.compile('[a-z]+')

m = p.match("python")
print(m)  # <re.Match object; span=(0, 6), match='python'> 매치가 되었다는 의미
print(m.group()) # 매칭 된 것을 보고 싶다면 Group을 사용

m = p.match("123 python")
print(m)  # None 이 된다. 