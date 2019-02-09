// https://www.urionlinejudge.com.br/judge/en/problems/view/1239
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	char texto[53];
	int i,conti=0,contj=0,tam;
	while(gets(texto)){
		tam=strlen(texto);
		for(i=0; i<tam; i++){
			if(texto[i] == '_'){
				conti++;
				if (conti == 1)
					printf("<i>");
				else{
					printf("</i>");
					conti=0;
				}
			}else if(texto[i] == '*'){
				contj++;
				if (contj == 1)
					printf("<b>");
				else{
					printf("</b>");
					contj=0;
				}
			}else
				printf("%c",texto[i]);
		}
		printf("\n");
	}
	return 0;
}
