// https://www.urionlinejudge.com.br/judge/en/problems/view/1263
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
	char s[5050];
	char proc;
	int tam,i,cont,tot,test;
	bool achou;
	while(gets(s)){
		tam=strlen(s);
		proc=toupper(s[0]);
		tot=cont=0;
		achou=false;
		for(i=0; i<tam-1; i++){
			if(s[i]==' ' && toupper(s[i+1])==proc)
				cont+=2;
			else if(s[i]==' ' && s[i+1]!=' '){
				if(achou)
					tot++;
				cont=0;
				achou=false;
				proc=toupper(s[i+1]);
			}
			if(cont>=2){
				achou=true;
			}
		}
		if(achou)
			printf("%d\n",++tot);
		else
			printf("%d\n",tot);
	}


	return 0;
}
