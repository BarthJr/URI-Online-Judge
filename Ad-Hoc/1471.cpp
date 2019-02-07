// https://www.urionlinejudge.com.br/judge/en/problems/view/1471
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	int n,r,num,i;
	int v[10002];

	while(scanf("%d %d",&n,&r)!=EOF){
		memset(v,0,(n+1)*sizeof(int));
		for(i=1; i<=r; i++){
			scanf("%d",&num);
			v[num]=num;
		}
		if(n==r)
			printf("*\n");
		else{
			for(i=1; i<=n; i++)
				if(v[i]!= i)
					printf("%d ",i);
			printf("\n");
		}
	}
	return 0;
}
