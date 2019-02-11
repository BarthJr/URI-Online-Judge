// https://www.urionlinejudge.com.br/judge/en/problems/view/1170
#include<cstdio>
using namespace std;

int main(){

	int n,i,cont;
	double x,comida;

	scanf("%d",&n);
	for(i=0; i<n; i++){
		cont=0;
		scanf("%lf",&x);
		comida=x;
		while(comida >1){
			comida/= 2;
			cont++;
		}
		printf("%d dias\n",cont);

	}
	return 0;
}
