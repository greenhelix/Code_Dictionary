#include "GraphTraversal.h"
#include "Graph.h"
#include "LinkedQueue.h"

void DFS(Vertex *V)
{ // 시작점이 될 정점을 매개변수로 받습니다.

    Edge *E = NULL; // 일단 간선의 객체를 만들어줍니다.

    printf("%d ", V->Data); // 노드에 들어있는 데이터 한번 보고~

    V->Visited = Visited; // 노드를 들렸으니 방문헀다고 인증박습니다.

    E = V->AdjacencyList; // 비어있는 간선객체에 현재 노드에 연결된 간선들을 넣어줍니다.

    while (E != NULL)
    { // 간선이 없어질 때까지 돌려

        // 조건문! 중요합니다.
        if (E->Target != NULL && E->Target->Visited == NotVisited) // 간선이 더 연결된 곳이 있다 그리고 가선의 타겟이 방문상태가 비방문이다.

            DFS(E->Target); // 그 간선이 연결된 노드를 시작으로 생각하고 재귀적으로 탐색을 다시 합니다.

        E = E->Next; // 막혀서 돌아오면, 이 문구를 통해 다른 간선으로 탐색을 다시 해봅니다.
    }
}

void BFS(Vertex *V, LinkedQueue *Queue)
{

    Edge *E = NULL;

    printf("strat : %d ", V->Data); // BFS 의 시작점

    V->Visited = Visited;

    LQ_Enqueue(Queue, LQ_CreateNode(V->Data)); // 깊이랑 차이점! 연결리스트를 생성해줍니다.(노드를 담아줄 공간)

    while (!LQ_IsEmpty(Queue))
    { // 큐가 다 비어질 때까지 계속 돌린다~

        Vertex *Popped = LQ_Dequeue(Queue); // 큐에서 맨앞에꺼 빼서 노드 객체로 선언~!

        V->Data = Popped->Data;

        E = V->AdjacencyList;

        while (E != NULL)
        { // 큐에서 빼낸 그 노드에 연결된 간선들 다 없어질때까지 반복

            V = E->Target; // 일단 하나씩 다 본다.

            if (V != NULL && V->Visited == NotVisited)
            { // 미방문이고, 있다면 조건 성립!

                printf("%d ", V->Data); // 성립한 것의 데이터 한번 봐주고

                V->Visited = Visited; // 방문 인증 해주고

                LQ_Enqueue(Queue, LQ_CreateNode(V->Data)); // 큐에 추가!!!
            }

            E = E->Next; // 조건 성립안된다면 다른 간선으로 이동~
        }
    }
}