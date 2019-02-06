// https://www.urionlinejudge.com.br/judge/en/problems/view/1250
#include<cstdio>
using namespace std;

int main(){

	int n,cont,num,i;
	int v[54];
	char ordm[54];
	scanf("%d",&n);
	for(i=0; i<n; i++){
		cont=0;
		scanf("%d",&num);
		for(int j=0; j<num; j++)
			scanf("%d",&v[j]);
		scanf("%s",ordm);
		for(int j=0; j<num; j++){
			if(v[j]<3 && ordm[j] == 'S')
				cont++;
			else if(v[j]>=3 && ordm[j] == 'J')
				cont++;
		}
		printf("%d\n",cont);
	}
	return 0;
}
