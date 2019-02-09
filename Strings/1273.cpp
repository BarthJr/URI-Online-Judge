// https://www.urionlinejudge.com.br/judge/en/problems/view/1273
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	int n,i,mr,tam,esp;
	char txt[54][54];
	scanf("%d",&n);
	if(n!=0){
		scanf("\n");
			mr=0;
			for(i=0; i<n; i++){
				scanf("%s",txt[i]);
				tam= strlen(txt[i]);
				if(tam>mr)
					mr=tam;
			}
			for(int j=0; j<n; j++){
				esp=mr-strlen(txt[j]);
				for(int k=0; k<esp; k++)
					printf(" ");
				printf("%s\n",txt[j]);
			}
		while(scanf("%d",&n) && (n!=0)){
			scanf("\n");
			mr=0;
			for(i=0; i<n; i++){
				scanf("%s",txt[i]);
				tam= strlen(txt[i]);
				if(tam>mr)
					mr=tam;
			}
			printf("\n");
			for(int j=0; j<n; j++){
				esp=mr-strlen(txt[j]);
				for(int k=0; k<esp; k++)
					printf(" ");
				printf("%s\n",txt[j]);
			}
		}
	}

	return 0;
}
