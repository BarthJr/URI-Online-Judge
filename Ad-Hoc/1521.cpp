// https://www.urionlinejudge.com.br/judge/en/problems/view/1521
#include<cstdio>

using namespace std;

#define fox(i,n) for (i=0; i<n; i++)
#define fox1(i,n) for (i=1; i<=n; i++)
#define MX 1024
int i,n,p,e,l,dest;
int v[MX];
int main(){
    while(scanf("%d",&n)&&n){
        fox1(i,n){
            scanf("%d",&p);
            v[i]=p;
        }
        scanf("%d",&l);
        dest=l;
        while(v[dest]!=dest){
            dest=v[dest];
        }
        printf("%d\n",dest);
    }

    return 0;
}