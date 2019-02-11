// https://www.urionlinejudge.com.br/judge/en/problems/view/1457
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	long long int i,tests,n,tam,aux,cont,j;
	char exp[103];
	scanf("%lld",&tests);
	for(i=0; i<tests; i++){
		scanf("%lld %s",&n,exp);
		if(n==0)
			printf("1\n");
		else{
			tam=strlen(exp);
			cont=n;
			aux=2;
			j=1;
			while(aux>1){
				aux=n-j*tam;
				if(aux<=0)
					break;
				cont*=aux;
				j++;
			}
			printf("%lld\n",cont);
		}
	}
	return 0;
}
