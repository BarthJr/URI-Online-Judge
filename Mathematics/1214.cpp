// https://www.urionlinejudge.com.br/judge/en/problems/view/1214
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

vector <int> v;

int main(){
	int i,j,k,test,n,num,tam;
	double med,sum,valor;
	scanf("%d",&test);
	for(i=0; i<test; i++){
		sum=0;
		valor=0;
		scanf("%d",&n);
		for(j=0; j<n; j++){
			scanf("%d",&num);
			v.push_back(num);
			sum+=num;
		}
		med=sum/n;
		tam=v.size();
		for(k=0; k<tam; k++){
			if(v[k]> med)
				valor++;
		}
		printf("%.3lf%%\n",(valor*100)/n);
		v.clear();
	}


	return 0;
}
