// https://www.urionlinejudge.com.br/judge/en/problems/view/1196
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

	int tam,i,j;
	char t[] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
	char s[3000];
	while(gets(s)){
		tam=strlen(s);
		for(i=0; i<tam; i++)
			if(s[i]==' ')
				printf(" ");
			else{
				for(j=0; j<47; j++)
					if(s[i]== t[j]){
						printf("%c",t[j-1]);
						break;
					}
			}
		printf("\n");
	}
	return 0;
}
