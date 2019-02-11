// https://www.urionlinejudge.com.br/judge/en/problems/view/1161
#include <cstdio>
using namespace std;
int main(){
	int m,n,i;
	unsigned long long cont1,cont2,soma;
	while(scanf("%d %d",&m,&n) != EOF) {
		cont1=1;
		cont2=1;
		for(i=1; i<=m; i++)
			cont1=cont1*i;
		for(i=1; i<=n; i++)
			cont2=cont2*i;
		soma= cont1+cont2;
		printf("%llu\n",soma);
	}
	return 0;
}
