// https://www.urionlinejudge.com.br/judge/en/problems/view/1437
#include <cstdio>
#include <string>
using namespace std;

int main () {
    int a;
    char c[1000];
    scanf("%d", &a);
    while (a != 0) {
        scanf("%s", c);
        int N = 1, L = 0, S = 0, O = 0, i;
        for (i = 0; i < a; i++) {
            if(N && c[i] == 'D') {
                L = 1;
                N = 0;
            } else if (N) {
                O = 1;
                N = 0;
            } else if (L && c[i] == 'D') {
                S = 1;
                L = 0;
            } else if (L) {
                N = 1;
                L = 0;
            } else if (S && c[i] == 'D') {
                O = 1;
                S = 0;
            } else if (S) {
                L = 1;
                S = 0;
            } else if (O && c[i] == 'D') {
                N = 1;
                O = 0;
            } else {
                S = 1;
                O = 0;
            }
        }
        if (N)
            printf("N\n");
        else if (L)
            printf("L\n");
        else if (S)
            printf("S\n");
        else
            printf("O\n");
        scanf("%d", &a);
    }
    return 0;
}
