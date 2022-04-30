import re
p = re.compile('[a-z]+')

m = p.search('python')

# 다음과 같은 기본 메서드들이 있다. 
m.group()   #group  매치된 문자열을 돌려준다.
m.start()   #0      매치된 문자열의 시작 위치를 돌려준다.
m.end()     #6      매치된 문자열의 끝 위치를 돌려준다.
m.span()    #(0, 6) 매치된 문자열의 (시작, 끝)에 해당하는 튜플을 돌려준다.
