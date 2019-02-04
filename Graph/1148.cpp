//https://www.urionlinejudge.com.br/judge/en/problems/view/1148
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
#define VMAX 1024
#define INF 0x3f3f3f3f

    int V,E,v1,v2,p,i,ori,dest,n;
    vector <pair<int,int> > G[VMAX];
    int d[VMAX];
    int W[VMAX][VMAX];
    bool vis[VMAX];

int dijkstra(){
    int k,tam,min,u,w;
    bool cnx;
    memset(d,0x3f,(V+1)*sizeof(int));
    memset(vis,false,(V+1)*sizeof(bool));
    d[ori]=0;
    vis[ori]=true;
    k=ori;
    while(!vis[dest]){
        vis[k]=true;
        tam=G[k].size();
        for(i=0; i<tam; i++){
            int u= G[k][i].first;
            int w= G[k][i].second;
	    if(W[k][u]==0 || W[u][k]==0){
            	if(!vis[u] && d[u]> d[k]+w)
                        d[u]=d[k]+w;
                }else
                    d[u]=d[k];

        }
        min=INF;
        cnx=false;
            for(i=1; i<=V; i++)
            	if(!vis[i] && d[i]<min){
                        min=d[i];
                        k=i;
                	cnx=true;
            	}
        if(!cnx)
            break;
    }
    if(vis[dest])
        return d[dest];
    else
        return -1;
}
int main(){
    while(scanf("%d %d",&V,&E) && (V || E)){
        for(i=1; i<=V; i++)
            G[i].clear();
    	for(i=1; i<=V; i++)
        	for(int j=1; j<=V; j++)
        	    W[i][j]=0;
        for(i=0; i<E; i++){
        	scanf("%d %d %d",&v1,&v2,&p);
        	G[v1].push_back(make_pair(v2,p));
        	W[v1][v2]=p;
        }
    	scanf("%d",&n);
    	for(int m=0; m<n; m++){
        	scanf("%d %d",&ori,&dest);
        	int resul=dijkstra();
        	if(resul==-1)
            		printf("Nao e possivel entregar a carta\n");
        	else
            		printf("%d\n",resul);
	}
    	printf("\n");
    }
    return 0;
}