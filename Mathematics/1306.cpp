// https://www.urionlinejudge.com.br/judge/en/problems/view/1306
#include<cstdio>
using namespace std;

int main(){

	int r,n,su,test=1;
	while(scanf("%d %d",&r,&n)&&(r||n)){
		if(r>n){
			su=1;
			while((su<= 26) && ((n*su)+n) < r)
				su++;
			if((su>26) || ((n*su)+n) <r)
				printf("Case %d: impossible\n",test++);
			else
				printf("Case %d: %d\n",test++,su);
		}else
			printf("Case %d: 0\n",test++);
	}

	return 0;
}
