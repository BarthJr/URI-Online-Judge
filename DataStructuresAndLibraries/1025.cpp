// https://www.urionlinejudge.com.br/judge/en/problems/view/1025
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

	int n,q,i,num,proc,pos,test=1;
	vector<int> v,v_aux;

	while(scanf("%d %d",&n,&q) && (n || q)){
		for(i=0; i<n; i++){
			scanf("%d",&num);
			v.push_back(num);
		}
		sort(v.begin(),v.end());
		for(i=0; i<q; i++){
			scanf("%d",&proc);
			v_aux.push_back(proc);
		}
		printf("CASE# %d:\n",test);
		test++;
		for(i=0; i<q; i++){
			if(binary_search(v.begin(),v.end(),v_aux[i])){
				pos=lower_bound(v.begin(),v.end(),v_aux[i]) - v.begin() + 1;
				printf("%d found at %d\n",v_aux[i],pos);
			}else
				printf("%d not found\n",v_aux[i]);
		}
		v_aux.clear();
		v.clear();
	}

	return 0;
}
