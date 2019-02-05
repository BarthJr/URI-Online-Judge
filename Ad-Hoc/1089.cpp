// https://www.urionlinejudge.com.br/judge/en/problems/view/1089
#include <cstdio>
using namespace std;
int main () {
    int n, i;
    int x, y, ant, atual, cont;
    int dirA, dirB;

    while (scanf("%d",&n) && n) {
        cont = 0;
        scanf("%d %d",&x,&y);

        ant = y;
        dirA = y-x;
        for (i=2; i<n; i++) {
            scanf("%d",&atual);
            dirB = atual-ant;
            if (dirB*dirA < 0) cont++;
            dirA= dirB;
            ant= atual;
        }

        dirB= x-ant;
        if (dirB*dirA < 0) cont++;
        dirA= dirB;
        dirB= y-x;
        if (dirB*dirA < 0) cont++;

        printf("%d\n",cont);

    }


    return 0;
}
