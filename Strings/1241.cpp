// https://www.urionlinejudge.com.br/judge/en/problems/view/1241
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

	int n,i,j,tam,tam1,k;
	char a[1002],b[1002];

	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%s %s",a,b);
		tam=strlen(a);
		tam1=strlen(b);
		if(tam1 > tam)
			printf("nao encaixa\n");
		else{
			j=tam-1;
			k=tam1-1;
			while((a[j] == b[k]) && k>=0){
				j--;
				k--;
			}
			if(k == -1)
				printf("encaixa\n");
			else
				printf("nao encaixa\n");
		}
	}
	return 0;
}
