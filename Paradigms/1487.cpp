// https://www.urionlinejudge.com.br/judge/en/problems/view/1487
#include<cstdio>
#define max(a, b) (a > b ? a : b)
using namespace std;

int main(){

    int tempo[602], valor[102];
    int PD[61404];
    int temp_tot,brinquedos,i,j,ins=1;

    while(scanf("%d %d",&brinquedos,&temp_tot) && (brinquedos || temp_tot)){
        for(i=1; i<=brinquedos; i++){
        scanf("%d",&tempo[i]);
        scanf("%d",&valor[i]);
       }
		PD[0]= 0;
		int b=0;
		for(int i=1; i<=temp_tot; i++){
        	for(j=1; j<=brinquedos; j++)
					if(i>=tempo[j])
						b=max(valor[j]+PD[i-tempo[j]],b);
			PD[i]=b;
		}
			printf("Instancia %d\n",ins++);
			printf("%d\n\n",PD[temp_tot]);
    }
    return 0;
}
