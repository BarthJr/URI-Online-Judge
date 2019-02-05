// https://www.urionlinejudge.com.br/judge/en/problems/view/1124
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int l,c,r1,r2;

	while (scanf("%d %d %d %d", &l,&c,&r1,&r2) && (l || c || r1 || r2)){
		if (fmin(l,c) < 2*fmax(r1,r2))
			printf("N\n");
		else{
			int R = r1+r2;
			int a = l - R;
			int b = c - R;

			if (a*a + b*b < R*R)
				printf("N\n");
			else
				printf("S\n");
		}

	}
	return 0;
}

