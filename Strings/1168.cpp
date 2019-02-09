// https://www.urionlinejudge.com.br/judge/en/problems/view/1168
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int n,soma,i,j,tam;
	int v[10];
	char num[102];

	v[0]= 6;
	v[1]= 2;
	v[2]= 5;
	v[3]= 5;
	v[4]= 4;
	v[5]= 5;
	v[6]= 6;
	v[7]= 3;
	v[8]= 7;
	v[9]= 6;

	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%s",num);
		soma=0;
		tam=strlen(num);
		for (j=0; j<tam; j++)
			soma+= v[(num[j] - '0')];
		printf("%d leds\n",soma);
	}

	return 0;
}
