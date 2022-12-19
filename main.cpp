#include <iostream>
#include "graph.h"
using namespace std;

int main()
{
    Graph G;
    adrNode P,Q;

    createGraph_1301210553(G);

    P = newNode_1301210553('A');
    addNode_1301210553(G,P);
    P = newNode_1301210553('B');
    addNode_1301210553(G,P);
    P = newNode_1301210553('C');
    addNode_1301210553(G,P);
    P = newNode_1301210553('D');
    addNode_1301210553(G,P);

    addEdge_1301210553(G,'A','B');
    addEdge_1301210553(G,'A','D');
    addEdge_1301210553(G,'A','C');
    addEdge_1301210553(G,'B','D');
    addEdge_1301210553(G,'B','A');
    addEdge_1301210553(G,'C','A');
    addEdge_1301210553(G,'D','A');
    addEdge_1301210553(G,'D','B');

    PrintGraph_1301210553(G);

}
