// https://www.urionlinejudge.com.br/judge/en/problems/view/1216
#include<cstdio>
using namespace std;

int main(){
	double dist,media,soma=0;
	char nome[100];
	int med=0;

	while(gets(nome)){
		scanf("%lf",&dist);
		getchar();
		soma+=dist;
		med++;
	}
	media=soma/med;
	printf("%.1lf\n", media);
	return 0;
}
