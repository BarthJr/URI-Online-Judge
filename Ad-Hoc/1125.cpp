// https://www.urionlinejudge.com.br/judge/en/problems/view/1125
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

	int g,p,i,j,lin,col,chegou,maior,s,k,pontos;
	int colocacao[102][102], soma_pontos[102];
	bool imprimiu;
	while(scanf("%d %d",&g,&p) && (g || p)){
		for(i=1; i<=g; i++)
			for(j=1; j<=p; j++){
			scanf("%d",&chegou);
			colocacao[i][j]=chegou;
			}
		scanf("%d",&s);
		for(i=1; i<=s; i++){
			imprimiu=false;
			scanf("%d",&k);
			memset(soma_pontos,0,sizeof(soma_pontos));
			maior=-1;
			for(j=1; j<=k; j++){
				scanf("%d",&pontos);
				for(lin=1; lin<=g; lin++)
					for(col=1; col<=p; col++)
						if(colocacao[lin][col]==j){
							soma_pontos[col]+=pontos;
							if(soma_pontos[col]>maior)
								maior=soma_pontos[col];
						}
			}
			for(j=1; j<=p; j++)
				if(maior==soma_pontos[j])
					if(not imprimiu){
						printf("%d",j);
						imprimiu=true;
					}else
						printf(" %d",j);
			printf("\n");
		}
	}

	return 0;
}
