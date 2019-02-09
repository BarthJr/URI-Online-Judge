// https://www.urionlinejudge.com.br/judge/en/problems/view/1262
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

	char s[5000];
	int i,tam,cont,pr,p;

	while(scanf("%s",&s)!=EOF){
		scanf("%d",&p);
		tam=strlen(s);
		cont=0;
		pr=0;
		for(i=0; i<tam-1; i++){
			if(s[i]=='W')
				cont++;
			else{
				pr++;
				if(s[i+1]=='W'){
					cont++;
					pr=0;
				}
				if(pr==p){
					cont++;
					pr=0;
				}
			}
		}
			printf("%d\n",cont+1);
	}



	return 0;
}
