// https://www.urionlinejudge.com.br/judge/en/problems/view/1436
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){

	int cont,procurado,valor,n,i,j,num,t,test=0;
	scanf("%d",&t);
	for(i=0; i<t; i++){
		test++;
		cont=0;
		scanf("%d",&n);
		valor=n/2;
		for(j=0; j<n; j++){
			scanf("%d",&num);
			if(cont == valor)
				procurado=num;
			cont++;
		}
		printf("Case %d: %d\n",test,procurado);
	}
	system("pause");
	return 0;
}
