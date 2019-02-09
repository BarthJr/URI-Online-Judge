// https://www.urionlinejudge.com.br/judge/en/problems/view/1272
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

	int n,i,j,tam;
	char frase[51];

	while(scanf("%d",&n)!= EOF){
		getchar();
		for(i=0; i<n; i++){
			gets(frase);
			tam=strlen(frase);
			frase[tam]=' ';
			if(frase[0] != ' ')
				printf("%c",frase[0]);
			for(j=0; j<tam; j++)
				if(frase[j]== ' ' && frase[j+1] != ' ')
					printf("%c",frase[j+1]);
			printf("\n");
		}
	}
	return 0;
}
