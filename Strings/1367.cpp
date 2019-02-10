// https://www.urionlinejudge.com.br/judge/en/problems/view/1367
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

int main(){

	int n,sum,p,cont;
	int v[27];
	char letra,op[11];
	while(scanf("%d",&n)&& (n!=0)){
		memset(v,0,sizeof(v));
		cont=sum=0;
		for(int i=0; i<n; i++){
			scanf(" %c %d %s",&letra,&p,op);
			if(!strcmp(op,"correct")){
				sum+=p+v[letra-'A'];
				cont++;
			}else
				v[letra-'A']+=20;
		}
	printf("%d %d\n",cont,sum);
	}

	return 0;
}
