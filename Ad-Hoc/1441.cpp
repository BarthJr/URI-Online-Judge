// https://www.urionlinejudge.com.br/judge/en/problems/view/1441
#include<cstdio>
#include<cstring>
using namespace std;


int main(){
	int n,num,maior;
	int PD[502];
	memset(PD,0,sizeof(PD));
	while(scanf("%d",&n)&& n!=0){
		if(PD[n] == 0){
			num=n;
			maior=n;
			while(num!=1){
				if(num%2==0)
					num=num/2;
				else
					num=3*num+1;
				if (num > maior)
					maior=num;
			}
		PD[n]=maior;
		printf("%d\n",maior);
		}
		else
			printf("%d\n",PD[n]);

	}
	return 0;
}
