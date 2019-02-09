// https://www.urionlinejudge.com.br/judge/en/problems/view/1234
#include<cstdio>
#include<cctype>
#include<cstring>
using namespace std;

int main(){

	int tam,i;
	bool vdd;
	char txt[54];
	while(gets(txt)){
		tam=strlen(txt);
		vdd=true;
		for(i=0; i<tam; i++){
			if(txt[i]!= ' '){
				if(vdd){
					putchar(toupper(txt[i]));
					vdd=false;
				}else{
					putchar(tolower(txt[i]));
					vdd=true;
				}
			}else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}