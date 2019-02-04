// https://www.urionlinejudge.com.br/judge/en/problems/view/1082
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
#define TAM_MAX 28
int V,E,i,j,n,tam,x,y,cont,num_comp,test=1;
    char v1,v2;
    vector<int> G[TAM_MAX],Comp[TAM_MAX];
    bool vis[TAM_MAX];

int DFS(int u){
    vis[u]=true;
    for(int i=0; i<G[u].size(); i++){
        if(!vis[G[u][i]]){
            Comp[num_comp].push_back(G[u][i]);
            DFS(G[u][i]);
        }
    }
}

int main(){
    scanf("%d",&n);
    for(int m=0; m<n; m++){
	for(i=0; i<V; i++){
		Comp[i].clear();
		G[i].clear();
	}
        scanf("%d %d ",&V,&E);
        memset(vis,false,sizeof(vis));
        for(i=0; i<E; i++){
            scanf(" %c %c",&v1,&v2);
            x=v1-'a';
	    y=v2-'a';
            G[x].push_back(y);
            G[y].push_back(x);
        }
        cont=num_comp=0;
        for(i=0; i<V; i++){
            if(!vis[i]){
		Comp[num_comp].push_back(i);
                DFS(i);
                num_comp++;
		cont++;
            }
        }
	printf("Case #%d:\n",test++);
	for(int p=0; p<num_comp; p++){
		tam=Comp[p].size();
		sort(Comp[p].begin(),Comp[p].end());
		for(int f=0; f<tam; f++)
			printf("%c,",Comp[p][f]+'a');
		printf("\n");
	}
	printf("%d connected components\n\n",cont);
    }
    return 0;
}