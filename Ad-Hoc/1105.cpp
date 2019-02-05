// https://www.urionlinejudge.com.br/judge/en/problems/view/1105
#include<cstdio>
using namespace std;

int main(){

	int b,n,i,j,r,d,c,v;
	int reserva[22];
	bool passou;

	while(scanf("%d %d",&b,&n) && (b ||n)){
		passou=true;
		for(i=1; i<=b; i++){
			scanf("%d",&r);
			reserva[i]= r;
		}
		for(j=1; j<=n; j++){
			scanf("%d %d %d",&d,&c,&v);
			reserva[c]+=v;
			reserva[d]-=v;
		}
		for(i=1; i<=b; i++)
			if (reserva[i] < 0){
				passou=false;
				break;
			}

		if (passou)
			printf("S\n");
		else
			printf("N\n");
	}

	return 0;
}
