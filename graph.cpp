#include "graph.h"

adrNode newNode_1301210553(char x){
/* mengembalikan alamat sebuah node baru dengan info berupa x */

    adrNode P = new Node;
    info(P) = x;
    nextNode(P) = NULL;
    firstEdge(P) = NULL;
    return P;
}

adrEdge newEdge_1301210553(char x){
/* mengembalikan alamat sebuah node baru dengan info berupa x */

    adrEdge P = new Edge;
    info(P) = x;
    nextEdge(P) = NULL;
    return P;
}

void createGraph_1301210553(Graph &G){
    firstGraph(G) = NULL;
}


void addNode_1301210553(Graph &G, adrNode P){
/*  I.S. terdefinisi alamat elemen Pertama dari graph G (mungkin kosong), dan sebuah alamat dari node baru yang disimpan Pada P.
    F.S. node baru ditambahkan ke dalam list Parent sebagai elemen terakhir*/
    adrNode Q;

    if(firstGraph(G) != NULL){
        Q = firstGraph(G);
        while(nextNode(Q) != NULL){
            Q = nextNode(Q);
        }
        nextNode(Q) = P;
    }else{
        firstGraph(G) = P;
    }
    nextNode(P) = NULL;
    firstEdge(P) = NULL;
}

adrNode findNode_1301210553(Graph G, char x){
    adrNode P = firstGraph(G);

    if(firstGraph(G) == NULL){
        return NULL;
    }else{
        while((info(P) != x) && nextNode(P) != NULL){
            P = nextNode(P);
        }
        if (info(P) == x){
            return P;
        }else{
            return NULL;
        }
    }
}

void addEdge_1301210553(Graph &G, char x, char y){
    adrNode P = findNode_1301210553(G,x);
    adrEdge Q = newEdge_1301210553(y);

    if (firstEdge(P) == NULL){
        firstEdge(P) = Q;
    }else{
        nextEdge(Q) = firstEdge(P);
        firstEdge(P) = Q;
    }
}

bool isConnected_1301210553(Graph G, char x, char y){
    adrNode P = firstGraph(G);
    adrEdge Q = firstEdge(P);
    while (nextEdge(Q) != NULL && info(Q) != y){
        Q = nextEdge(Q);
    }
    if (info(Q) == y){
        return true;
    }else{
        return false;
    }
}

void PrintGraph_1301210553(Graph G){
    adrNode P = firstGraph(G);
    adrEdge Q;

    if (firstGraph(G) != NULL){
        while (P != NULL){
            cout<<"node "<<info(P)<<" :";
            Q = firstEdge(P);
            while (Q != NULL){
                cout<<" - "<<info(Q);
                Q = nextEdge(Q);
            }
            cout<<endl;
            P = nextNode(P);
        }
        cout<<endl;
    }else{
        cout<<"Graph Kosong"<<endl;
    }
}
