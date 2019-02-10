// https://www.urionlinejudge.com.br/judge/en/problems/view/1069
#include<cstdio>
#include<cstring>

using namespace std;

int main(){

	int n,i,j,cont,soma,tam;
	char mine[1001];

	scanf("%d",&n);
	for(i=0; i<n; i++){
		cont=0;
		soma=0;
		scanf("%s",mine);
		tam= strlen(mine);
		for(j=0; j<tam; j++){
			if (mine[j] == '<')
				cont++;
			else if(mine[j] == '>' && cont > 0){
				soma++;
				cont--;
			}
		}
		printf("%d\n",soma);
	}
	return 0;
}
