// https://www.urionlinejudge.com.br/judge/en/problems/view/1255
#include<cstdio>
#include<map>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
	int n,i,tam,maior;
	int v[27];
	char frase[205];
	scanf("%d ",&n);
	for(i=0; i<n; i++){
		memset(v,0,sizeof(v));
		maior=0;
		gets(frase);
		tam=strlen(frase);
		for(int j=0; j<tam; j++)
			if(isalpha(frase[j])){
				frase[j]=tolower(frase[j]);
				v[frase[j]-'a']++;
				if(v[frase[j]-'a']>maior)
					maior=v[frase[j]-'a'];
			}
		for(int j=0; j<26; j++)
			if(v[j] == maior)
				printf("%c",j+'a');
		printf("\n");
	}
	return 0;
}