//https://www.urionlinejudge.com.br/judge/en/problems/view/1039
#include<cstdio>
#include<cmath>
using namespace std;

int main(){

	int r1,x1,y1,r2,x2,y2,a,b,modulo;
	double c;
	while(scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2) != EOF){
		if(r1<r2)
			printf("MORTO\n");
		else{
			modulo=fabs(r1-r2);
			a=(x1-x2)*(x1-x2);
			b=(y1-y2)*(y1-y2);
			c= sqrt(a + b);
			if(modulo < c)
				printf("MORTO\n");
			else
				printf("RICO\n");
		}
	}
	return 0;
}
