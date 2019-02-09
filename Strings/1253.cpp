// https://www.urionlinejudge.com.br/judge/en/problems/view/1253
#include<cstdio>
#include<cstring>
#include<cstdlib>

using namespace std;

int main(){
	int n,d,i,j,tam,sum;
	char fr[54];
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("\n");
		scanf("%s",fr);
		scanf("%d",&d);
			tam=strlen(fr);
			for(j=0; j<tam; j++){
				if(fr[j]>='A'&& fr[j]<='Z'){
					if(fr[j]-d<65){
						sum=fr[j]-65;
						printf("%c",91-abs(sum-d));
					}else
						printf("%c",fr[j]-d);
				}else
					printf("%c",fr[j]);
			}
			printf("\n");
	}

	return 0;
}
