// https://www.urionlinejudge.com.br/judge/en/problems/view/1257
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

	int n,sum,num,tam;
	char s[52];
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		sum=0;
		scanf("%d ",&num);
		for(int j=0; j<num; j++){
			scanf("%s",s);
			tam=strlen(s);
			for(int k=0; k<tam; k++)
				sum+=(s[k]-'A')+j+k;
		}
		printf("%d\n",sum);
	}

	return 0;
}
