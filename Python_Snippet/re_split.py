from re import split

# 원하는 양식으로 문자열을 리스트로 나누기
# 분할을 하더라도 원하는 양식으로 변형이 필요할 수 있다.

result = split('<[^<>]*>',
               '<html> Wow <head> header </head> <body> Hey </body> </html>')
print(result)
# ['', ' Wow ', ' header ', ' ', ' Hey ', ' ', '']
# list_empty_remove 스닙팻을 찾아보자
print(''.join(result).split())
# ['Wow', 'header', 'Hey']

sample1 = "100-200+470*1213"
nums = split('[-*+]', sample1)  # [+-*]이렇게 하면 오류난다. -을 범위식으로 착각함
cals = split('[\d]+', sample1)
# list_empty_remove 스닙팻을 찾아보자
print(nums, '\n', cals)
print(list(''.join(cals)))
