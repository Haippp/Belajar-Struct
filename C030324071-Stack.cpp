#include <iostream>
using namespace std;

const int MAXSATCK = 15;
typedef int stokItem;

typedef struct{
    stokItem Buku[MAXSATCK];
    int count;
} stack;