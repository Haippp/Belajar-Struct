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

int Empty(Stack *S){
    return (S->Count == 0);
}

void Pop(Stack *S, stokItem *x){
    if (Empty(S))
        cout << "Stack masih kosong!" << endl;
    else{
        --(S->Count);
        *x = S->Buku[S->Count];
    }
}

void Push(stokItem x, Stack *S){
    if (Full(S))
        cout << "Stack penuh! Data tidak dapat masuk!" << endl;
    else{
        S->Buku[S->Count] = x;
        ++(S->Count);
    }
}

int main(){
    Stack Perpus;
    stokItem *B = Perpus.Buku;

    initializeStack(&Perpus);

    Pop(&Perpus, B);
    Push(99, &Perpus);
    
    printf("%d", *B);
}