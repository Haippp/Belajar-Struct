#include <iostream>
using namespace std;

const int MAXSATCK = 15;
typedef int stokItem;

typedef struct{
    stokItem Buku[MAXSATCK];
    int Count;
} Stack;

void initializeStack(Stack *S){
    S->Count = 0;
}

int Full(Stack *S){
    return (S->Count == MAXSATCK);
}

int Empyt(Stack *S){
    return (S->Count == 0);
}