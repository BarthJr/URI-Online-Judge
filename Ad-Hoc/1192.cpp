// https://www.urionlinejudge.com.br/judge/en/problems/view/1192

#include<cstdio>
using namespace std;

int main(){

	int n,i,a,b;
	char palavra[4],letra;
	scanf("%d",&n);
	getchar();
	for(i=0; i<n; i++){
		scanf("%s",palavra);
		a=palavra[0]-48;
		b=palavra[2]-48;
		letra=palavra[1];
		if(a==b)
			printf("%d\n",a*b);
		else if (letra >= 'A' && letra <= 'Z')
			printf("%d\n",b-a);
			else
				printf("%d\n",a+b);
	}
	return 0;
}
