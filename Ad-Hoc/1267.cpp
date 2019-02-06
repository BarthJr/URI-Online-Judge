// https://www.urionlinejudge.com.br/judge/en/problems/view/1267
#include<cstdio>

using namespace std;

int main(){

	int n,m,cont,i,j;
	int w[502][102];
	bool para;
	while(scanf("%d %d",&m,&n)&& (m || n)){
		para=false;
		for(i=0; i<n; i++)
			for(j=0; j<m; j++)
				scanf("%d",&w[i][j]);
		for(i=0; i<m; i++){
			cont=0;
			for(j=0; j<n; j++)
				if(w[j][i]==1)
					cont++;
			if(cont==n){
				para=true;
				break;
			}
		}
		if(para)
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}