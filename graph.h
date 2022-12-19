#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

using namespace std;
#include <iostream>

#define info(P) (P)->info
#define nextNode(P) (P)->nextNode
#define firstEdge(P) (P)->firstEdge
#define nextEdge(P) (P)->nextEdge
#define info(Q) (Q)->info
#define nextNode(Q) (Q)->nextNode
#define firstEdge(Q) (Q)->firstEdge
#define nextEdge(Q) (Q)->nextEdge
#define firstGraph(G) ((G).firstGraph)

typedef char infotypeNode;
typedef char infotypeEdge;

typedef struct Node* adrNode;
typedef struct Edge* adrEdge;

struct Node{
    infotypeNode info;
    adrEdge firstEdge;
    adrNode nextNode;
};

struct Edge{
    infotypeEdge info;
    adrEdge nextEdge ;
};

struct Graph{
    adrNode firstGraph;
};

adrNode newNode_1301210553(char x);
void createGraph_1301210553(Graph &G);
void addNode_1301210553(Graph &G, adrNode P);
adrNode findNode_1301210553(Graph G, char x);
void addEdge_1301210553(Graph &G, char x, char y);
bool isConnected_1301210553(Graph G, char x, char y);
void PrintGraph_1301210553(Graph G);

#endif // GRAPH_H_INCLUDED
