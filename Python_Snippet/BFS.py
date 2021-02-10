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
right_left = [-1, 1, 0, 0]
up_down = [0, 0, 1, -1]
# 방향 벡터는 총 방향의 종류가 배열의 갯수(len)을 의미한다. 그리고 각 방향 횡종렬 단위, 즉 양쪽을 기준으로 나눈다.
# 위아래, 좌우, 좌대각우대각, 앞뒤 등 방향의 종류에 따라 쌍으로 진행하는게 많다.

# 가장 중요한 부분
# 1. 너비탐색의 시작조건이 성립되면 너비탐색을 시작한다.
# 2. 너비탐색에서 처음 시작점을 입력하여 반복문을 통해 해당 방향 벡터 조건대로 성립하는 것을 찾는다.(조건문을 통해 탐색이 종료되게 해야함)
# 3. 조건 성립한 것은 원하는 결과의 형태로 담아서 계속 진행한다.

# 예시 문제 (f5를 눌러서 바로 실행 가능하다.)
n = 7
sample = ['0110100', '0110101', '1110101',
          '0000111', '0100000', '0111110', '0111000']
matrix = [list(map(int, sample[i]))for i in range(len(sample))]

result = []


def bfs(x, y):
    queue = [[x, y]]
    # 해당 첫 발견 지점을 0으로 설정하고 카운트를 통해 건물을 세주고 시작점으로 활용한다.
    matrix[x][y] = 0
    count = 1
    while queue:
        # 시작점 설정
        a, b = queue[0][0], queue[0][1]
        # 시작점 할당 후 해당 지점을 지워버린다.(큐에 쌓이는것을 지우는 것이고, 지도상에 데이터는 0으로만 변경하는 것임.)
        del queue[0]
        # 방향을 탐색하는 반복문 부분
        for i in range(4):
            newX = a + right_left[i]
            newY = b + up_down[i]
            # 반복문을 정리하여 간추릴 조건문
            # 범위 n을 넘지 않는 선에서 설정하거나 원하는 범위를 설정한다.
            if 0 <= newX < n and 0 <= newY < n and matrix[newX][newY] == 1:
                # 탐색이 완료 된 곳은 0으로 설정해서 더 이상 탐색 대상이 되지 않게 한다.
                matrix[newX][newY] = 0
                queue.append([newX, newY])
                count += 1
    result.append(count)


for i in range(n):
    for j in range(n):
        # 1이 발견되는 건물 있는 곳에서 부터 탐색을 시작한다.
        if matrix[i][j] == 1:
            print(f'[{i}, {j}]이 시작점입니다.')
            print('현재지도의 상태입니다. :')
            print(*matrix, sep='\n')
            bfs(i, j)

print('------------------')
print(*matrix, sep='\n')
result.sort()
print(result)
print(
    f'단지구역은 총 {len(result)}곳이며, \n 1단지는 총 {result[0]} 건물 \n 2단지는 총 {result[1]} 건물 \n 3단지는 총 {result[2]} 건물')
