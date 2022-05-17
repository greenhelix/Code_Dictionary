# Graph.c Graph.h Test_Graph.c 실행시키기

### 아래의 명령어를 터미널에서 실행시킨다.

> gcc -o [실행파일명] Graph.c Graph.h Test_Graph.c

### 컴파일이 완료되면, 실행시킨다.

> .\\[실행파일명]

### 정상 출력 결과

> 1 : 2[0] 3[0] 4[0] 5[0] <br>
> 2 : 1[0] 3[0] 5[0] <br>
> 3 : 1[0] 2[0] <br>
> 4 : 1[0] 5[0] <br>
> 5 : 1[0] 2[0] 4[0]

# GraphTraversal.c GraphTraversal.h Test_GraphTraversal.c 실행시키기 

### 아래의 명령어를 터미널에서 실행시킨다. 

> gcc -o [실행파일명] Graph.c Graph.h LinkedList.c LinkedList.h GraphTraversal.c GraphTraversal.h Test_GraphTraversal.c 

### 정상 출력 결과 
1 또는 0을 입력하여 모드를 선택한다.
> Enter Traversal Mode (0: DFS, 1:BFS) : 0 <br>
> 1 2 4 5 7 3 6 <br>
> Enter Traversal Mode (0: DFS, 1:BFS) : 1 <br>
> 1 2 3 4 5 6 7

