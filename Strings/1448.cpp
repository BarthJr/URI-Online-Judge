// https://www.urionlinejudge.com.br/judge/en/problems/view/1448
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

	int i,j,n,tam,tam1,tam2,errou1,errou2,test=1;
	char frase[1002],frase1[1002],frase2[1002];
	scanf("%d",&n);
	scanf("%d\n");
	for(i=0; i<n; i++){
		tam1=tam2=0;
		fgets(frase,1002,stdin);
		fgets(frase1,1002,stdin);
		fgets(frase2,1002,stdin);
		tam=strlen(frase);
		for(j=0; j<tam; j++){
			if(frase1[j]==frase[j])
				tam1++;
			if(frase2[j]==frase[j])
				tam2++;
		}
		printf("Instancia %d\n",test++);
		if(tam1>tam2)
			printf("time 1\n\n");
		else if(tam2>tam1)
			printf("time 2\n\n");
			else{
				errou1=0;
				errou2=0;
				for(j=0; j<tam; j++){
					if(frase1[j]!=frase[j])
						errou1++;
					if(frase2[j]!=frase[j])
						errou2++;
					if(errou1 < errou2){
						printf("time 1\n\n");
						break;
					}
					else if(errou2<errou1){
						printf("time 2\n\n");
						break;
					}
				}
					if(errou1==errou2)
						printf("empate\n\n");
			}
	}
	return 0;
}
