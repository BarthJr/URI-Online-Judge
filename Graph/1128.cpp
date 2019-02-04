//https://www.urionlinejudge.com.br/judge/en/problems/view/1128
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
#define TAM_MAX 2002

int i,V,E,v1,v2,cont,p,g;
vector <int> G[2][TAM_MAX];
bool vis[TAM_MAX];
bool conexo;

int DFS(int u,int g){
	vis[u]=true;
	for(int i=0; i<G[g][u].size(); i++)
		if(!vis[G[g][u][i]])
			DFS(G[g][u][i],g);
}
int main(){
	while(scanf("%d %d",&V,&E)&& (V || E)){
		for(i=1; i<=V; i++){
			G[0][i].clear();
			G[1][i].clear();
		}
		conexo=true;
		for(i=0; i<E; i++){
			scanf("%d %d %d",&v1,&v2,&p);
			if(p==1){
				G[0][v1].push_back(v2);
				G[1][v2].push_back(v1);
			}else{
				G[0][v1].push_back(v2);
				G[0][v2].push_back(v1);
				G[1][v1].push_back(v2);
				G[1][v2].push_back(v1);
			}
		}
		memset(vis,false,sizeof(vis));
		cont=0;
		for(i=1; i<=V; i++)
			if(!vis[i]){
				cont++;
				DFS(i,0);
			}
		if(cont>1){
			printf("0\n");
			continue;
		}else{
			memset(vis,false,sizeof(vis));
			cont=0;
			for(i=1; i<=V; i++)
				if(!vis[i]){
					cont++;
					DFS(i,1);
				}
			if(cont>1){
				printf("0\n");
				continue;
			}
		}
			printf("1\n");
	}
	return 0;
}
