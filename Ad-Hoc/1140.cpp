// https://www.urionlinejudge.com.br/judge/en/problems/view/1140
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;


int main(){

	int i,tam;
	char s[1100];
	char proc;
	bool acaba;
	while(gets(s)){
		acaba=false;
		tam=strlen(s);
		if(tam==1 && s[0]=='*')
			break;
		proc=toupper(s[0]);
		for(i=0; i<tam; i++){
			if(s[i]== ' ' && toupper(s[i+1])!=proc){
				acaba=true;
				break;
			}
		}
		if(acaba)
			printf("N\n");
		else
			printf("Y\n");
	}

}