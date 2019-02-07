// https://www.urionlinejudge.com.br/judge/en/problems/view/1414
#include<cstdio>
using namespace std;

int main(){

	int n,t,pontos,soma,i;
	char time[11];
	while(scanf("%d %d",&t,&n) && t){
		soma=0;
		for(i=0; i<t; i++){
			scanf("%s",time);
			scanf("%d",&pontos);
			soma+=pontos;
		}
		printf("%d\n",(n*3)-soma);
	}

	return 0;
}
