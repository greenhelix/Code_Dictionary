# BFS - Breadth-First Search
# https://en.wikipedia.org/wiki/Breadth-first_search
'''BFS is an algorithm for traversing or searching tree or graph data structure.
it uses a queue instead of a stack.
advantages
The shortest path from the starting node to the target node is guaranteed.
Disadvantages
When the path is very long, more memory space is required as the number of search branches increases rapidly.
If there is no solution, in the case of a finite graph, it will fail after searching all graphs.
In the case of an infinite graph, it never finds a solution and never ends.'''
# 그래프엣 너비우선탐색을 활용한다.
# 너비 탐색, 깊이 탐색에서 중요한 부분은 방향이다.
# 방향 벡터가 주워지는 문제가 많다.
from collections import deque
import sys
# right_left = [-1, 1, 0, 0]
# up_down = [0, 0, 1, -1]
# 방향 벡터는 총 방향의 종류가 배열의 갯수(len)을 의미한다. 그리고 각 방향 횡종렬 단위, 즉 양쪽을 기준으로 나눈다.
# 위아래, 좌우, 좌대각우대각, 앞뒤 등 방향의 종류에 따라 쌍으로 진행하는게 많다.

# 가장 중요한 부분
# 1. 너비탐색의 시작조건이 성립되면 너비탐색을 시작한다.
# 2. 너비탐색에서 처음 시작점을 입력하여 반복문을 통해 해당 방향 벡터 조건대로 성립하는 것을 찾는다.(조건문을 통해 탐색이 종료되게 해야함)
# 3. 조건 성립한 것은 원하는 결과의 형태로 담아서 계속 진행한다.

# 예시 문제 (vsCode 에서 f5를 눌러 컴파일을 실행하면 바로 과정을 볼수 있다.)
# 샘플 데이터 양식 부분입니다.
# n = 7
# sample = ['0110100', '0110101', '1110101',
#           '0000111', '0100000', '0111110', '0111000']
# matrix = [list(map(int, sample[i]))for i in range(len(sample))]

# # 여기서부터 데이터가 주어진 후 너비우선탐색을 진행하는 코드입니다.
# result = []


# def bfs(x, y):  # 이 스니펫의 핵심부분.
#     queue = [[x, y]]    # 시작점을 큐에 넣어준다.
#     matrix[x][y] = 0    # 해당 첫 발견 지점을 0으로 설정하고 카운트를 통해 건물을 세주고 시작점으로 활용한다.
#     count = 1           # 조건에 부합한 시작점을 카운팅 해준다.(아닌경우도 있을 듯)
#     while queue:
#         a, b = queue[0][0], queue[0][1]  # 시작점 설정 및 할당
#         # 시작점 할당 후 해당 지점을 지워버린다.(큐에 쌓이는것을 지우는 것이고, 지도상에 데이터는 0으로만 변경하는 것임.)
#         del queue[0]
#         for i in range(4):  # 방향을 탐색하는 반복문 부분
#             newX = a + right_left[i]
#             newY = b + up_down[i]
#             # 반복문을 정리하여 간추리는 조건문
#             # 범위 n을 넘지 않는 선에서 설정하거나 원하는 범위를 설정한다.
#             if 0 <= newX < n and 0 <= newY < n and matrix[newX][newY] == 1:
#                 # 탐색이 완료 된 곳은 0으로 설정해서 더 이상 탐색 대상이 되지 않게 한다.
#                 matrix[newX][newY] = 0
#                 queue.append([newX, newY])
#                 count += 1
#     result.append(count)


# # 너비우선탐색 메서드를 데이터 맵에 적용하는 부분입니다.
# for i in range(n):
#     for j in range(n):
#         # 1이 발견되는 건물 있는 곳에서 부터 탐색을 시작한다.
#         if matrix[i][j] == 1:
#             print(f'[{i}, {j}]이 시작점입니다.')
#             print('현재지도의 상태입니다. :')
#             print(*matrix, sep='\n')
#             bfs(i, j)

# print('------------------')
# print(*matrix, sep='\n')
# result.sort()
# print(result)
# print(
#     f'단지구역은 총 {len(result)}곳이며, \n 1단지는 총 {result[0]} 건물 \n 2단지는 총 {result[1]} 건물 \n 3단지는 총 {result[2]} 건물')

# BFS는 방향 없는 경우도 사용해야한다.
# 중요한 특징은 항상 어떠한 형태든 맵이 있어야 하고 그 기반을 통해
# 반복과 조건으로 돌리는 것이다.
# 그러므로 반복문의 시간 복잡도를 조금이나마 덜기위해 Dque를 데크를 사용하여
# 시간 복잡도를 최대한 아끼는 것이다.

# 다음은 시간의 맵을 활용하여, 이를 조건에 맞게 하여 풀이한 문제를 가져왔다.
n, k = map(int, sys.stdin.readline().split())
matrix = [0] * 100001
mega_range = 100001  # 범위의 경우 헷갈리는 경우가 발생하므로 한 곳에서 통제한다.
순서 = deque()
print(n, '에서', k, '으로 가야한다.')


def bfs(st, en, second):
    순서.append(st)
    while 순서:
        print('IN while')
        시작점 = 순서.popleft()
        print('this a : ', 시작점, ': queue:', 순서)
        if 시작점 == en:
            return second[시작점]
        for 결과 in (시작점 + 1, 시작점 - 1, 시작점 * 2):
            print('결과는 : ', 결과)
            if 0 <= 결과 < mega_range and second[결과] == 0:    # 결과 지점에서 0 인지 아닌지 확인해야한다. 
                second[결과] = second[시작점] + 1  # 결과시점은 처음 시작점에서의 1초 흘렀다고 생각하면된다.
                순서.append(결과)


print(f'총 {bfs(n, k, matrix)}초가 걸립니다.')
