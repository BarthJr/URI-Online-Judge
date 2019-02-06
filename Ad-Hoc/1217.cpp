// https://www.urionlinejudge.com.br/judge/en/problems/view/1217
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

int main(){
	int n,i,cont,test=1;
	double prc,tot_prc=0,cont_tot=0;
	char compra[10000];
	char *pch;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%lf ",&prc);
		tot_prc+=prc;
		gets(compra);
		pch=strtok(compra," ,.-");
		while(pch !=NULL){
			cont++;
			pch = strtok(NULL," ,.-");
		}
		printf("day %d: %d kg\n",test++,cont);
		cont_tot+=cont;
		cont=0;
	}
	printf("%.2lf kg by day\n",cont_tot/n);
	printf("R$ %.2lf by day\n",tot_prc/n);


	system("pause");
	return 0;
}
