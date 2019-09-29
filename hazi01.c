#include <stdio.h>
#include <stdlib.h>

int kisebb(int a, int b) {
    if(a<b) {
        return a;
    }
    else {
        return b;
    }
}

char* paros(int a) {
    if(a%2==0) {
        return "paros";
    }
    else {
        return "paratlan";
    }
}

int main()
{
    int i;
    int tomb[10] = {4, 21, 15, 9, 17, 18, 22, 10, 25, 19};
    for(i=0; i<9; i++) {
        int szam=kisebb(tomb[i], tomb[i+1]);
        char* p = paros(szam);
        printf("%d %s %d\n", szam, p, szam+1);
    }
    return 0;
}
