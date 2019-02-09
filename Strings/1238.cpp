// https://www.urionlinejudge.com.br/judge/en/problems/view/1238
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	char a[53], b[53];
	int n,tam,tam1,i,j;
	while(scanf("%d",&n)!= EOF){
		for(i=0; i<n; i++){
			scanf("%s %s",a,b);
			tam=strlen(a);
			tam1=strlen(b);
			if (tam <= tam1){
				for(j=0; j<tam; j++)
					printf("%c%c",a[j],b[j]);
				for(j=tam; j<tam1; j++)
					printf("%c",b[j]);
				printf("\n");
			}else{
				for(j=0; j<tam1; j++)
					printf("%c%c",a[j],b[j]);
				for(j=tam1; j<tam; j++)
					printf("%c",a[j]);
				printf("\n");
			}
		}
	}
	return 0;
}
