// https://www.urionlinejudge.com.br/judge/en/problems/view/1376
#include <cstdio>
using namespace std;
#define maxl 102
#define maxc 102

int main(){
    int n,r,c,k,cont,i,j,inimigo;
    int w[maxl][maxc],h[maxl][maxc];

    while (scanf("%d %d %d %d",&n,&r,&c,&k) and (n or r or c or k)){

        for (j=0; j<=c+1; j++)
          w[0][j]=0;
        for (j=0; j<=c+1; j++)
          w[r+1][j]=0;

        for (i=0; i<=r+1; i++)
          w[i][0]=0;
        for (i=0; i<=r+1; i++)
          w[i][c+1]=0;


        for (i=1; i<=r; i++)
            for (j=1; j<=c; j++)
                scanf ("%d", &w[i][j]);

        for (i=1; i<=r; i++)
           for (j=1; j<=c; j++)
               h[i][j]= w[i][j];

        for (cont=1; cont<=k; cont++){
            for (i=1; i<=r; i++){
                for (j=1; j<=c; j++){
                    if (w[i][j] == n-1)
                       inimigo= 0;
                    else
                        inimigo= w[i][j] + 1;

                    if (w[i+1][j] == inimigo)
                       h[i+1][j]= w[i][j];
                    if (w[i-1][j] == inimigo)
                       h[i-1][j]= w[i][j];
                    if (w[i][j+1] == inimigo)
                       h[i][j+1]= w[i][j];
                    if (w[i][j-1] == inimigo)
                       h[i][j-1]= w[i][j];
                }
            }
            for (i=1; i<=r; i++)
                    for (j=1; j<=c; j++)
                        w[i][j]= h[i][j];
        }

        for (i=1; i<=r; i++){
        	for (j=1; j<=c-1; j++)
			    printf("%d ",h[i][j]);
		    printf("%d\n",h[i][j]);

        }
    }

     return 0;
}

