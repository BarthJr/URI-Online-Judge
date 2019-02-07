// https://www.urionlinejudge.com.br/judge/en/problems/view/1445
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
#define MAX 1024
vector <int> G[MAX];
bool vis[MAX],conta;
int cont,i,n,v,w,tam,j;
char palavra[MAX];

int DFS(int u){
    vis[u]=true;
    for(int i=0; i<G[u].size(); i++)
        if(!vis[G[u][i]]){
            cont++;
            DFS(G[u][i]);
        }
}
int main(){
    while(scanf("%d",&n)&& (n!=0)){
        for(i=1; i<=MAX; i++)
            G[i].clear();
        memset(vis,false,MAX*sizeof(bool));
        cont=1;
        for(i=0; i<n; i++){
		getchar();
            scanf("(%d,%d)",&v,&w);
            G[v].push_back(w);
            G[w].push_back(v);
        }
        DFS(1);
        printf("%d\n",cont);
    }
    return 0;
}
