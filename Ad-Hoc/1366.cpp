// https://www.urionlinejudge.com.br/judge/en/problems/view/1366
#include<cstdio>
using namespace std;

int main(){

	int n,i,lados,c,v;
	while(scanf("%d",&n) && n){
		lados=0;

		for(i=n; i>0; i--){
			scanf("%d %d",&c,&v);
			lados+= v >> 1;
		}
		printf("%d\n", lados >> 1 );
	}
	return 0;
}
