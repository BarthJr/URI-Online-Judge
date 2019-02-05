// https://www.urionlinejudge.com.br/judge/en/problems/view/1129
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	int n,med,cont,a,b,c,d,e,i,mnr,mnr1,mnr2,mnr3;
	while(scanf("%d",&n)&& (n!=0)){
		med=128;
		for(i=0; i<n; i++){
			cont=0;
			scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
			mnr1=min(a,b);
			mnr2=min(c,d);
			mnr3=min(mnr1,mnr2);
			mnr=min(mnr3,e);
			if(a<med)
				cont++;
			if(b<med)
				cont++;
			if(c<med)
				cont++;
			if(d<med)
				cont++;
			if(e<med)
				cont++;
			if(cont==1){
				if(mnr==a)
					printf("A\n");
				else if(mnr==b)
					printf("B\n");
				else if(mnr==c)
					printf("C\n");
				else if(mnr==d)
					printf("D\n");
				else if(mnr==e)
					printf("E\n");
			}else
				printf("*\n");
		}
	}

	return 0;
}
