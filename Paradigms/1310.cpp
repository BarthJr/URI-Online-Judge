// https://www.urionlinejudge.com.br/judge/en/problems/view/1310
#include<cstdio>
using namespace std;

int x,y,n,num,i,custo;
int v[1024];

int main(){
	while(scanf("%d",&n)!= EOF){
		int maxA=0,maxT=-1;
		scanf("%d",&custo);
		for(i=0; i<n; i++){
			scanf("%d",&num);
			v[i]=num;
		}
		for(i=0;i<n;i++){
			maxA+=v[i]-custo;
			if(maxA < 0)
				maxA= 0;
			if(maxA > maxT)
				maxT= maxA;
		}
		printf("%d\n",maxT);
	}
}
