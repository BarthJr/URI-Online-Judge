// https://www.urionlinejudge.com.br/judge/en/problems/view/1486
#include<cstdio>

using namespace std;

#define maxl 1024
#define maxc 1024
int w[maxl][maxc];
int p,n,c,i,j,tam_palito,palito;
	bool tem_palito;


int main(){
	while(scanf("%d %d %d",&p,&n,&c) && (p|| n|| c)){
		for(i=1; i<=n; i++)
			for(j=1; j<=p; j++)
				scanf("%d",&w[i][j]);
		palito=0;
		for(int j=1; j<=p; j++){
			tam_palito=0;
			tem_palito=false;
			for(i=1; i<=n; i++){
				if (w[i][j] > 0)
					tam_palito+=w[i][j];
				else{
					if(tem_palito){
						palito++;
						tem_palito=false;
					}
					tam_palito=0;

				}
				if(tam_palito >= c)
					tem_palito=true;
			}
			if(tem_palito)
				palito++;
		}
		printf("%d\n",palito);
		palito=0;
	}
	return 0;
}