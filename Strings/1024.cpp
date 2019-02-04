//https://www.urionlinejudge.com.br/judge/en/problems/view/1024
#include<cstdio>
#include<cstring>
#include <cmath>
using namespace std;

int main(){
    int n,i,j,tam,metade;
	char texto[1002];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++){
             gets(texto);
             tam = strlen(texto);
             for(j=0;j<tam; j++){
				if(texto[j] >= 'a' && texto[j] <= 'z')
					texto[j]+=3;
				else if(texto[j] >= 'A' && texto[j] <= 'Z')
					texto[j]+=3;
            }
			if (tam % 2 == 1)
				metade= tam/2;
			else
				metade= (tam/2)-1;
			 for(j=0;j<=metade; j++){
				texto[j]-=1;
			}
		for(j=tam-1; j>=0; j--)
			printf("%c",texto[j]);

		printf("\n");
    }
    return 0;
}
