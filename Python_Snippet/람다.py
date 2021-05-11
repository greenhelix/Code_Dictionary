# 람다 표현식이란 식별자 없이 실행 가능한 함수를 말한다.

# 함수 선언이 따로 없어도 하나의 식으로 함수를 단순하게 표현이 가능하다.


logs = ['dig1 8 1 5 1', 'let1 art can', 'dig2 3 6',
        'let2 own kit dig', 'let3 art zero']

# print(logs[1].split()[1])  # art


def reorderLogFiles(logs):
    letters, digits = [], []
    for log in logs:
        # 띄어쓰기로 구분하여 자르고 그중 2번째 인자가가 숫자인가 아닌가로 따진다.
        if log.split()[1].isdigit():
            digits.append(log)
        else:
            letters.append(log)
    # 우선순위로 2번째 인자를 기준으로 정렬하며, 동일한 경우 후순위 식별자인
    # 1번째 인자를 통해서 정렬된다.
    letters.sort(key=lambda x: (x.split()[1:], x.split()[0]))

    # letters = ['let1 art can', 'let3 art zero', 'let2 own kit dig']
    # digits = ['dig1 8 1 5 1', 'dig2 3 6']

    return letters + digits


print(reorderLogFiles(logs))
# ['let1 art can', 'let3 art zero', 'let2 own kit dig', 'dig1 8 1 5 1', 'dig2 3 6']
