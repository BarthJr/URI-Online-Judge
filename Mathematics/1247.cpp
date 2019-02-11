// https://www.urionlinejudge.com.br/judge/en/problems/view/1247
#include<cstdio>
#include<cmath>
int main(){
	int D,Vf,Vg;
	double dist, guard, fugi;

	while(scanf("%d %d %d",&D,&Vf,&Vg)!=EOF){
		dist= sqrt(D*D+12*12);
		fugi= 12.0/Vf;
		guard= dist/Vg;
		fugi < guard ? printf("N\n"): printf("S\n");
	}
	return 0;
}
