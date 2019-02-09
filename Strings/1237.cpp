// https://www.urionlinejudge.com.br/judge/en/problems/view/1237
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define MX 1024
    int i,j;
    char a[MX],b[MX];
    int PD[MX][MX];

int main(){
    while(gets(a) && gets(b)){

        int n= strlen(a);
        int m= strlen(b);
        int r=0;
        for(i=0;i<=n;i++)
            PD[i][0]=0;
        for(j=0;j<=m;j++)
            PD[0][j]=0;
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
                if(a[i-1]==b[j-1]){
                    PD[i][j]=PD[i-1][j-1]+1;
                    r=max(r,PD[i][j]);
                }else
                    PD[i][j]=0;
        printf("%d\n",r);
    }
    return 0;
}