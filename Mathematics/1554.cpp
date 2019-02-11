// https://www.urionlinejudge.com.br/judge/en/problems/view/1554
#include <cstdio>
#include <cstdlib>
#include <cmath>

#define GETCHAR getchar_unlocked

using namespace std;
int c, n, x, y, a, b, menor;
double d;

inline void Read(int &x){
    char c,r=0,n=0;
    x=0;
        for(;;){
            c=GETCHAR();
                if ((c=='-') && (!r))
                    n=1;
                else
                if ((c>='0') && (c<='9'))
                    x=x*10+c-'0',r=1;
                else
                if (r)
                    break;
        }
        if (n)
            x=-x;
}

int main () {
	Read(c);

    for (int i = 0; i < c; i++) {
	Read(n);
        Read(x);Read(y);
        Read(a);Read(b);
        d = hypot(x-a, y-b);
        menor = 1;
        for (int j = 2; j <= n; j++) {
	    Read(a);Read(b);
            int d2 = hypot(x-a, y-b);
            if (d2 < d) {
                d = d2;
                menor = j;
            }
        }
        printf ("%d\n", menor);
    }
    return 0;
}