# 그 결과로 반복 가능한 객체(iterator object)를 돌려준다.
import re
p = re.compile('[a-z]+')

result = p.finditer("life is too short")
print(result) # <callable_iterator object at 0x000002041DFEE320>

for i in result: 
    print(i.group())
    
# life
# is
# too
# short