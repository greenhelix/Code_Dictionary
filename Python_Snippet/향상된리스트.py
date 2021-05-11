# List Comprehension

import re

paragraph = "Bob hit a ball, the hit BALL flew far after it was hit."
banned = ['hit']

# 정규식을 통해서, 문자가 아닌것은 공백으로 바꾸고(치환한다. = substitute),
# 모든 글자를 소문자로바꾸며 banned가 있다면 제외한다는 조건으로
# 전처리 작업을 해준다.
words = [word for word in re.sub(
    r'[^\w]', ' ', paragraph).lower().split() if word not in banned]

print(words)
# ['bob', 'a', 'ball', 'the', 'ball', 'flew', 'far', 'after', 'it', 'was']
