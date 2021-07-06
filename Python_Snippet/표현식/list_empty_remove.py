# 리스트 안에 비어있는 값 제거하기
sample1 = ['', ' Wow ', ' header ', ' ', ' Hey ', ' ', '']
sample2 = ['', ' W ow ', ' header ', ' ', ' Hey ', ' ', '']

# 이러한 비어있는 값이 존재하는 리스트를 간단하게 제거하는 방법
# join 과 split으로 가능하다.(추천)
print(''.join(sample1).split())
print(''.join(sample2).split())
# sample1 >>> ['Wow', 'header', 'Hey']
# sample2 >>> ['W', 'ow', 'header', 'Hey']
# 각 요소에 띄어쓰기가 포함되어있다면, 분할이 안된다.


# Sample2의 경우 요소 안에 띄어쓰기가 있으므로, 이를 포함하여 구분하기 위해서는 아래 방법으로 한다.
# map으로 띄어쓴 공간을 줄여주고, filter를 통해서 ''값을 제거해준다. (활용에 따라 유용할 듯)
# >>> ['', 'Wow', 'header', '', 'Hey', '', ''] 각 값의 띄어쓰기 제거
sample1 = list(map(lambda x: x.strip(), sample1))
sample1 = list(filter(lambda x: x != '', sample1))
print(sample1)
sample2 = list(map(lambda x: x.strip(), sample2))
sample2 = list(filter(lambda x: x != '', sample2))
print(sample2)
# sample1 >>> ['Wow', 'header', 'Hey']
# sample2 >>> ['W ow', 'header', 'Hey']
