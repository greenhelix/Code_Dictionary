#include "Graph.h"

Graph* CreateGraph(){

    Graph* graph = (Graph*)malloc(sizeof(Graph)); // 그래프 객체 메모리 할당
    
    graph->Vertices = NULL; // 그래프 객체의 비어있는 노드로 설정(포인터)
    
    graph->VertexCount = 0; // 그래프 객체의 노드 갯수 0개로 설정 (포인터)

    return graph;  // 그래프 객체를 리턴해준다.
}

void DestroyGraph(Graph* G){ // 삭제할 그래프 객체를 매개변수로 포인터로 받는다.

    while(G->Vertices != NULL){ // 그래프 안의 노드들이 남아있다면 계속 반복
        
        Vertex* Vertices = G->Vertices->Next; // 첫 노드를 다음것을 임시로 가져온다. 포인터로
        
        DestroyVertex(G->Vertices); // 노드 삭제에 첫 노드를 넣어서 삭제
        
        G->Vertices = Vertices; // 임시로 가져온 다음 노드를 첫 노드로 다시 리셋해준다.
    
    }

    free(G); // 그래프 객체 안의 노드들이 없앴으니 그래프 객체를 메로리 할당해체를 한다.
}

Vertex* CreateVertex(ElementType Data){ // 노드를 생성할때 넣을 데이터를 파라미터로 받는다.
    
    Vertex* V = (Vertex*)malloc(sizeof(Vertex)); // 생성할 노드에 메모리 할당

    V -> Data = Data; // 데이터를 노드의 데이터부분에 값을 넣어준다.

    V -> Next = NULL; // 다음 연결 노드는 일단 비어있는 상태로 초기값 설정.

    V -> AdjacencyList = NULL; // 연결된 엣지(간선)들의 종류도 비어있는 상태로 설정.

    V -> Visited = NotVisited; // 방문여부는 일단 방문안한것으로 초기값 설정.

    V -> Index = -1; // 노드의 인덱스를 -1로 설정(0부터 시작시키기위함)

    return V;
}

void DestroyVertex(Vertex* V){  // 삭제할 노드를 파라미터로 받는다.

    while(V -> AdjacencyList != NULL){ // 해당 노드의 연결된 간선들이 없어질 때까지 반복한다.

        Edge* Edge = V -> AdjacencyList -> Next; // 삭제시킬 노드의 간선의 다음 간선을 임시로 담아둔다.

        DestroyEdge(V -> AdjacencyList); // 간선을 삭제 시킨다.

        V -> AdjacencyList = Edge; // 임시로 담은 간선을 삭제시킬 간선에 넣어준다.
    }

    free(V); // 메모리 할당 풀어준다.
}

Edge* CreateEdge(Vertex* From, Vertex* Target, int Weight){

    Edge* E = (Edge*)malloc(sizeof(Edge));

    E -> From = From;

    E -> Target = Target;

    E -> Next = NULL;

    E -> Weight = Weight;

    return E;
}

void DestroyEdge(Edge* E){

    free(E);
}

void AddVertex(Graph* G, Vertex* V){

    Vertex* VertexList = G -> Vertices;

    if(VertexList == NULL){

        G -> Vertices = V;
    }else{

        while(VertexList -> Next != NULL)
            VertexList = VertexList -> Next;
        
        VertexList -> Next = V;
    }

    V -> Index = G -> VertexCount++; 
}

void AddEdge(Vertex* V, Edge* E){

    if(V -> AdjacencyList == NULL){

        V -> AdjacencyList = E;
    
    }else{

        Edge* AdjacencyList = V -> AdjacencyList;

        while(AdjacencyList -> Next != NULL)
            AdjacencyList = AdjacencyList -> Next;
        
        AdjacencyList -> Next = E;
    }
}

void PrintGraph(Graph* G){

    Vertex* V = NULL;
    
    Edge* E = NULL;

    if((V = G -> Vertices) == NULL)
        return;
    
    while(V != NULL){

        printf("%c : ", V -> Data);

        if((E = V -> AdjacencyList) == NULL){
            
            V = V -> Next;
            
            printf("\n");

            continue;

        }

        while(E != NULL){

            printf("%c[%d] ", E -> Target -> Data, E -> Weight);

            E = E -> Next;
        }

        printf("\n");

        V = V -> Next;
    }

    printf("\n");
}
