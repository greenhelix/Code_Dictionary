#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>
#include <stdlib.h>

enum VisitMode {Visited, NotVisited};

typedef int ElementType;  // 데이터를 담는 필드 숫자로 설정이 되어있다. 바꿀 수 있다. 

// 노드를 나타낸다. Vertex!
typedef struct tagVertex{
    ElementType Data; // 데이터를 담는 필드이다. 원하는 타입으로 바꿀수 있다.
    int Visited; // 순회알고리즘에 필요 방문여부
    int Index; // 정점의 인덱스
    struct tagVertex* Next; // 다음 정점을 나타내는 포인터
    struct tagEdge* AdjacencyList; // 인접 정점의 간선 목록을 나타내는 포인터
} Vertex;

// 간선(엣지, 관계)를 나타낸다. Edge!
typedef struct tagEdge{
    int Weight;
    struct tagEdge* Next;
    Vertex* From;
    Vertex* Target;
} Edge;

// 노드들을 나타내는 포인터와 노드들의 갯수를 포함하는것으로 그래프를 정의합니다.
typedef struct tagGraph{
    Vertex* Vertices;
    int VertexCount;
} Graph;

Graph* CreateGraph();  // 그래프 객체 생성(포인터)하는 생성자 함수

void DestroyGraph(Graph* G); // 그래프 구조체를 삭제하는 함수

Vertex* CreateVertex(); 

void DestroyVertex(Vertex* V);

Edge* CreateEdge(Vertex* From, Vertex* Target, int Weight);

void DestroyEdge(Edge* E);

void AddVertex(Graph* G, Vertex* V);

void AddEdge(Vertex* V, Edge* E);

void PrintGraph(Graph* G);

#endif