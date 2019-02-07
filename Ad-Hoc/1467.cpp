// https://www.urionlinejudge.com.br/judge/en/problems/view/1467
#include<cstdio>
using namespace std;

int main(){
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)!= EOF){
		if(a==b && b==c)
			printf("*\n");
		else{
			if(a==b)
				printf("C\n");
			if(a==c)
				printf("B\n");
			if(b==c)
				printf("A\n");
		}
	}
	return 0;
}
