// https://www.urionlinejudge.com.br/judge/en/problems/view/1288
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){

	int dano[102], peso[102];
	int w[102][102];
	int tests,i,j,n,k,r,col;

	scanf("%d",&tests);
	for(i=1; i<=tests; i++){
		scanf("%d",&n);
		for(j=1; j<=n; j++)
			scanf("%d %d", &dano[j],&peso[j]);
		scanf("%d %d",&k,&r);
		for(j=0; j<k; j++)
			w[0][j]=0;
		for(j=1; j<=n; j++){
			w[j][0]=0;
			for(col=1; col<=k; col++)
				if(peso[j] > col)
					w[j][col]= w[j-1][col];
				else
					w[j][col]= max(w[j-1][col-peso[j]]+dano[j],w[j-1][col]);
		}
		if (w[n][k] >= r)
			printf("Missao completada com sucesso\n");
		else
			printf("Falha na missao\n");

	}


	return 0;
}
