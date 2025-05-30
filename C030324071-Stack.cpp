#include <iostream>
using namespace std;

const int MAXSATCK = 15;
typedef int stokItem;

typedef struct{
    stokItem Buku[MAXSATCK];
    int count;
} Stack;

void initializeStack(Stack *S){
    S->count = 0;
}

int Full(Stack *S){
    return (S->count == MAXSATCK);
}