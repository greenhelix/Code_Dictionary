import re
p = re.compile('[a-z]+')

result = p.findall("life is too short")
print(result) # 리스트로 매칭된것을 보여준다.