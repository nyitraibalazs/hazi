#include <stdio.h>
#include <stdlib.h>

int lnko(int a, int b) {
    while(b != 0) {
        int b2 = b;
        b = a%b;
        a = b2;
    }
    return a;
}

int lkkt(int a, int b) {
    return (a*b)/lnko(a, b);
}

int main()
{
    int tomb[10] = {4, 21, 15, 9, 17, 18, 22, 10, 25, 19};
    for(int i=0; i<9; i++) {
        printf("%d %d %d %d\n", tomb[i], tomb[i+1], lnko(tomb[i], tomb[i+1]), lkkt(tomb[i], tomb[i+1]));
    }
    return 0;
}
