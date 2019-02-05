// https://www.urionlinejudge.com.br/judge/en/problems/view/1030
#include <cstdio>

using namespace std;

int jh1(int n, int k, int sP){
    if(n == 1)
        return 1;
    int newSp= (sP+k-2) % n+1;
    int sv= jh1(n-1,k,newSp);
    if (sv < newSp)
        return sv;
    else
        return sv+1;
}

int jh(int n, int k){ return jh1(n, k, 1); }

int main (){
    int n, nc, k, i, v[1000];
    scanf("%d", &nc);
    for(i=0; i<nc; i++){
        int j,r;
		j=r=0;
        scanf("%d %d",&n,&k);
        r= jh(n,k);
        printf("Case %d: %d\n", i+1, r);
    }
}
