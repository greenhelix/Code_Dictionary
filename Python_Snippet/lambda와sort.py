# 람다표현을 통해 정렬하는 경우

s = ['2 a', '1 b', '4 c', '1 a']
# 맨 앞의 숫자 인자를 기분으로 정렬이 된다.
print(sorted(s))  # ['1 a', '1 b', '2 a', '4 c']

# 숫자가 아니라 뒤의 알파벳을 기준으로 정렬을 하기 위해서
s.sort(key=lambda x: (x.split()[1], x.split()[0]))
print(s)  # ['1 a', '2 a', '1 b', '4 c']


def sorting(x):  # 따로 함수를 선언해서 사용도 가능하다. 모듈화 가능.
    return x.split()[1], x.split()[0]


s.sort(key=sorting)
print(s)  # ['1 a', '2 a', '1 b', '4 c']
