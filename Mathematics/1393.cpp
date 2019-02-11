// https://www.urionlinejudge.com.br/judge/en/problems/view/1393
#include<cstdio>
using namespace std;

int V[44];
int main(){
	int i,n;

	V[0]=1;
	V[1]=1;
	for(i=2; i<=40; i++){
		V[i]=V[i-1]+V[i-2];
	}
	while(scanf("%d",&n)&& (n!=0))
		printf("%d\n",V[n]);

	return 0;
}
