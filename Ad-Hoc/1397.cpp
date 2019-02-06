// https://www.urionlinejudge.com.br/judge/en/problems/view/1397
#include<cstdio>
using namespace std;

int main(){

	int n,a,b,i,conta,contb;
	while(scanf("%d",&n) && n){
		conta=0;
		contb=0;
		for(i=0; i<n; i++){
			scanf("%d %d",&a,&b);
			if(a>b)
				conta++;
			else if(b>a)
				contb++;
		}
		printf("%d %d\n",conta,contb);
	}
	return 0;
}
