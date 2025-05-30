#include <iostream>
using namespace std;

const int MAXSATCK = 10;
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
        cout << "Nilai " << *x << " Berhasil diambil" << endl;
    }
}

void Push(stokItem x, Stack *S){
    if (Full(S))
        cout << "Stack penuh! Data tidak dapat masuk!" << endl;
    else{
        S->Buku[S->Count] = x;
        cout << "Nilai " << x << " Berhasil di tambahkan" << endl;
        ++(S->Count);
    }
}

int main(){
    Stack Perpus;
    stokItem *B = Perpus.Buku;

    initializeStack(&Perpus);

    Pop(&Perpus, B);
    Push(99, &Perpus);
    
    Push(73, &Perpus);
    Push(23, &Perpus);
    Push(88, &Perpus);
    Pop(&Perpus, B);

    Push(12, &Perpus);
    Push(65, &Perpus);
    Push(53, &Perpus);
    Push(24, &Perpus);
    Push(66, &Perpus);
    Push(79, &Perpus);
    Push(77, &Perpus);
    Push(38, &Perpus);
    
    Pop(&Perpus, B);
    Push(21, &Perpus);
}