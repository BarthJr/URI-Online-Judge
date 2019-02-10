// https://www.urionlinejudge.com.br/judge/en/problems/view/1259
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

bool maior_to_menor(int i,int j){return (i>j);}

int main(){

	int n,num,i;
	vector<int> par,impar;

	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&num);
		if(num%2 == 0)
			par.push_back(num);
		else
			impar.push_back(num);
	}
	sort(par.begin(),par.end());
	for(i=0; i<par.size(); i++)
		printf("%d\n",par[i]);
	sort(impar.begin(),impar.end(),maior_to_menor);
	for(i=0; i<impar.size(); i++)
		printf("%d\n",impar[i]);
	return 0;
}
