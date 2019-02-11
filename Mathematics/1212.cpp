// https://www.urionlinejudge.com.br/judge/en/problems/view/1212
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

	int tam,tam1,cont,i,j,vai,fim;
	char n[12],m[12];
	while(scanf("%s %s",n,m)){
		cont=vai=0;
		tam=strlen(n);
		tam1=strlen(m);
		if(tam==1 && tam1==1 && n[0]=='0' && m[0]=='0')
			break;
		if(tam==tam1)
			for(i=tam-1; i>=0; i--)
				if(((n[i]-'0')+(m[i]-'0')+vai)>9){
					cont++;
					vai=1;
				}else
					vai=0;
		else if(tam>tam1){
			fim=tam-tam1;
			j=tam1-1;
			for(i=tam-1; i>=fim; i--){
				if(((n[i]-'0')+(m[j]-'0')+vai)>9){
					cont++;
					vai=1;
				}else
					vai=0;
				j--;
			}
			for(i=fim-1; i>=0; i--){
				if(((n[i]-'0')+vai)>9){
					cont++;
					vai=1;
				}else
					vai=0;
			}
		}
		else if(tam1>tam){
			fim=tam1-tam;
			j=tam-1;
			for(i=tam1-1; i>=fim; i--){
				if(((m[i]-'0')+(n[j]-'0')+vai)>9){
					cont++;
					vai=1;
				}else
					vai=0;
				j--;
			}
			for(i=fim-1; i>=0; i--){
				if(((m[i]-'0')+vai)>9){
					cont++;
					vai=1;
				}else
					vai=0;
			}
		}


		if (cont==0)
			printf("No carry operation.\n");
		else if(cont==1)
			printf("%d carry operation.\n",cont);
		else
			printf("%d carry operations.\n",cont);

	}


	return 0;
}