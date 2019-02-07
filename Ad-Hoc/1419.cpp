// https://www.urionlinejudge.com.br/judge/en/problems/view/1419
#include<cstdio>
using namespace std;

int main(){

	int n,pos1,pos2,somac1,somac2,soma1,soma2,candidato1,candidato2,i,m,l;
	bool liberou1,liberou2;
	while(scanf("%d",&n) && n){
		pos1=-1;
		scanf("%d",&m);
		somac1=1;
		soma1=candidato1=m;
		liberou1=false;
		for(i=1; i<n; i++){
			scanf("%d",&m);
			if(candidato1 == m && not liberou1){
				somac1++;
				if (somac1 == 3){
					liberou1=true;
					pos1=i;
				}
			}else{
				candidato1=m;
				somac1=1;
			}
			soma1+=m;

		}
		pos2=-1;
		scanf("%d",&l);
		somac2=1;
		soma2=candidato2=l;
		liberou2=false;
		for(i=1; i<n; i++){
			scanf("%d",&l);
			if(candidato2 == l && not liberou2){
				somac2++;
				if (somac2 == 3){
					liberou2=true;
					pos2=i;
				}
			}else{
				candidato2=l;
				somac2=1;
			}
			soma2+=l;
		}

		if((pos2 != -1) && (pos1 != -1)){
			if((pos2<pos1))
				soma2+=30;
			else if((pos1<pos2))
				soma1+=30;
		}else if((pos1 == -1) && (pos2 != -1))
			soma2+=30;
			else if((pos2 == -1) && (pos1 != -1))
				soma1+=30;

		if (soma1 > soma2)
			printf("M\n");
		else if(soma2 > soma1)
			printf("L\n");
			else
				printf("T\n");
	}
	return 0;
}
