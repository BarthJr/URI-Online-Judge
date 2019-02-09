// https://www.urionlinejudge.com.br/judge/en/problems/view/1120
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

int main(){
	int i,tam,j;
	char d[2];
	char n[111];
	scanf("%s %s",d,n);
	tam=strlen(n);
	while((n[0] != '0' || strlen(n) > 1) || ((d[0] != '0' || strlen(d) > 1))){
		tam=strlen(n);
		i=0;
		while(((n[i] == '0') || (n[i] == d[0])) && n[i] != tam)
			i++;
		if (i == tam)
			printf("0\n");
		else{
			for(j=i; j<tam; j++)
				if(n[j] != d[0])
					printf("%c",n[j]);
			printf("\n");
		}
		scanf("%s %s",d,n);
	}

	return 0;
}

