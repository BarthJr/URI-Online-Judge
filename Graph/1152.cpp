// https://www.urionlinejudge.com.br/judge/en/problems/view/1152
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define edge pair< int, int >
#define MAX 200001

vector< pair< int, edge > > G, MST;
int pai[MAX], total, V, E;

int findset(int x, int *pai){
    if(x != pai[x])
        pai[x] = findset(pai[x], pai);
    return pai[x];
}

void kruskal(){
    int i, pu, pv;
    sort(G.begin(), G.end());
    for(i=total=0; i<E; i++){
        pu = findset(G[i].second.first, pai);
        pv = findset(G[i].second.second, pai);
        if(pu != pv){
            MST.push_back(G[i]);
            total += G[i].first;
            pai[pu] = pai[pv];
        }
    }
}

void reset(){
    for(int i=0; i<V; i++){
		pai[i] = i;
		G.clear();
		MST.clear();
	}
}
int main(){
    int i, u, v, w,soma;

    while(scanf("%d %d", &V, &E)&& (V || E)){
		soma=0;
		total=0;
	    reset();
	    for(i=0; i<E; i++){
	        scanf("%d %d %d", &u, &v, &w);
			soma+=w;
	        G.push_back(pair< int, edge >(w, edge(u, v)));
	    }
	    kruskal();
		printf("%d\n",soma-total);
	}

    return 0;
}
