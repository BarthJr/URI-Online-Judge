// https://www.urionlinejudge.com.br/judge/en/problems/view/1205
#include<cstdio>
#include<cstring>
#include<vector>
#include<cmath>
using namespace std;
#define TAMM 1002
#define INF 0x3f3f3f3f

int V,E,m,x,y,loc,i,ori,dest,pos;
int d[TAMM],tot[TAMM];
vector <int> G[TAMM];
double p;
bool vis[TAMM];

int dijkstra(){
	int k,tam,min,u,w;
	bool cnx;
	memset(d,0x3f,(V+1)*sizeof(int));
	memset(vis,false,(V+1)*sizeof(bool));
	d[ori]=tot[ori];
	vis[ori]=true;
	k=ori;
	while(!vis[dest]){
		vis[k]=true;
		tam=G[k].size();
		for(i=0; i<tam; i++){
			int u= G[k][i];
			int w= tot[u];
			if(!vis[u] && d[u]> d[k]+w)
				d[u]=d[k]+w;
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
	while(scanf("%d %d %d %lf",&V,&E,&m,&p)!=EOF){
		for(i=1; i<=V; i++)
            		G[i].clear();
		while(E--){
			scanf("%d %d",&x,&y);
			G[x].push_back(y);
			G[y].push_back(x);
		}
		scanf("%d",&loc);
		memset(tot,0,(V+1)*sizeof(int));
		for(i=1; i<=loc; i++){
			scanf("%d",&pos);
			tot[pos]+=1;
		}
		scanf("%d %d",&ori,&dest);
			int resul=dijkstra();
			if(resul==-1 || resul > m)
				printf("0.000\n");
			else
				printf("%.3lf\n",pow(p,resul));

	}
	return 0;
}