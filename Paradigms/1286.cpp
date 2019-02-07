// https://www.urionlinejudge.com.br/judge/en/problems/view/1286
#include<cstdio>
#define max(a, b) (a > b ? a : b)
using namespace std;

int main(){

    int tempo[22], pizza[22];
    int PD[22][32];
    int max_pizzas,pedidos,i,j;

    while(scanf("%d %d",&pedidos,&max_pizzas) && (pedidos)){
	    for(i=1; i<=pedidos; i++){
		scanf("%d",&tempo[i]);
		scanf("%d",&pizza[i]);
	   }
	    for(i=0; i<=max_pizzas; i++)
		PD[0][i]= 0;
	    for(i=1; i<=pedidos; i++){
		PD[i][0]= 0;
		for(j=1; j<=max_pizzas; j++)
		    if(pizza[i] > j)
		        PD[i][j]= PD[i-1][j];
		    else
		        PD[i][j]= max(tempo[i]+PD[i-1][j-pizza[i]],PD[i-1][j]);
	    }
		printf("%d min.\n",PD[pedidos][max_pizzas]);

	}
    return 0;
}
