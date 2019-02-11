// https://www.urionlinejudge.com.br/judge/en/problems/view/1429
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	int i,j,tam,soma;
	int fat[6];
	char num[6];
	fat[1]=1;
	fat[2]=2;
	fat[3]=6;
	fat[4]=24;
	fat[5]=120;

	while(scanf("%s",num)){
		tam=strlen(num);
		if(tam==1 && (num[0]-'0' == 0))
			break;
		soma=0;
		j=0;
		for(i=tam; i>0; i--)
			soma+=fat[i]*(num[j++]-'0');

		printf("%d\n",soma);
	}

	return 0;
}
