// https://www.urionlinejudge.com.br/judge/en/problems/view/1087
#include<cstdio>
#include<cmath>
using namespace std;

int main(){

	int a,b,x1,y1,x2,y2;
	while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2) && (x1 || y1 || x2 || y2)){
		if((x1==x2) && (y1==y2))
			printf("0\n");
		else if((x1==x2) || (y1==y2))
				printf("1\n");
			else{
			a=x1-x2;
			b=y1-y2;
			if((abs(a)==abs(b)) && (x2+a == x1) && (y2+b == y1))
				printf("1\n");
				else
					printf("2\n");
			}
	}

	return 0;
}
