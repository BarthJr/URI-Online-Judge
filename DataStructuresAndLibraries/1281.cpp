// https://www.urionlinejudge.com.br/judge/en/problems/view/1281
#include<cstdio>
#include<string>
#include<cstring>
#include<map>
#include<iostream>
using namespace std;

int main(){
	int n,i,m,p;
	double qnt,sum;
	char fruta[200];
	string s;
	map<string,double> mapa;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		sum=0;
		scanf("%d",&m);
		scanf("\n");
		for(int j=0; j<m; j++){
			scanf("%s",fruta);
			s= fruta;
			scanf("%lf",&qnt);
			mapa[s]=qnt;
			scanf("\n");
		}
		scanf("%d",&p);
		scanf("\n");
		for(int j=0; j<p; j++){
			scanf("%s",fruta);
			s=fruta;
			scanf("%lf",&qnt);
			sum+=mapa[s]*qnt;
			scanf("\n");
		}
		printf("R$ %.2lf\n",sum);
	}


	return 0;
}