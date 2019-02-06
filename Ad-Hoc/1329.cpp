// https://www.urionlinejudge.com.br/judge/en/problems/view/1329
#include<cstdio>
using namespace std;

int main(){

	int n,m,j,i,num;
	while(scanf("%d",&n) && n){
		m=0;
		j=0;
		for(i=0; i<n; i++){
			scanf("%d",&num);
			if(num==0)
				m++;
			else
				j++;
		}
		printf("Mary won %d times and John won %d times\n",m,j);
	}
	return 0;
}
