//https://www.urionlinejudge.com.br/judge/en/problems/view/1028
#include<cstdio>
using namespace std;

int main(){

	int n,i,a,b,f1,f2,aux;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d %d",&f1,&f2);
		if (f1!=0 || f2!=0){
			a=f1;
			b=f2;
			while(b != 0){
				aux=b;
				b=a%b;
				a=aux;
			}
			printf("%d\n",aux);
		}else
			printf("0\n");
	}

	return 0;
}
