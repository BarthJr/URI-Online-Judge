// https://www.urionlinejudge.com.br/judge/en/problems/view/1318
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

	int n,m,i,num,cont;
	int v[10002];

	while(scanf("%d %d",&n,&m)&& (n||m)){
		cont=0;
		memset(v,0,(n+1)*sizeof(int));
		for(i=0; i<m; i++){
			scanf("%d",&num);
			v[num]+=1;
		}
		for(i=1; i<=n; i++){
			if(v[i]>1)
				cont++;
		}
		printf("%d\n",cont);
	}
	return 0;
}