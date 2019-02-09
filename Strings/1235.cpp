// https://www.urionlinejudge.com.br/judge/en/problems/view/1235
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

	int n,tam,metade,i,j;
	char frase[101];

	scanf("%d",&n);
	getchar();
	for(i=0; i<n; i++){
		gets(frase);
		tam=strlen(frase);
		metade=tam/2;
			for(j=metade-1; j>=0; j--)
				printf("%c",frase[j]);
			for(j=tam-1; j>=metade; j--)
				printf("%c",frase[j]);
			printf("\n");
	}
	return 0;
}
