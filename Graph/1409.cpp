// https://www.urionlinejudge.com.br/judge/en/problems/view/1409
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
#define INF 0x3f3f3f3f
#define TAMM 1002
#define GETCHAR getchar_unlocked

int m,V,E,k,i,a,b,sl,vida,sum,p,q,aux;
int mana[TAMM], dano[TAMM],PD[TAMM],tot[TAMM];

int d[TAMM];
bool vis[TAMM];

vector<int> G[TAMM],monstros[TAMM];

inline void Read(int &x){
	char c,r=0,n=0;
	x=0;
		for(;;){
			c=GETCHAR();
				if ((c=='-') && (!r))
					n=1;
				else
				if ((c>='0') && (c<='9'))
					x=x*10+c-'0',r=1;
				else
				if (r)
					break;
		}
		if (n)
			x=-x;
}

int ehPD(){
    int u=1000;
    PD[0]=0;
    for(p=1; p<=u; p++){
        aux=INF;
        for(q=1; q<=m; q++)
            aux=min(aux,(mana[q]+PD[max(p-dano[q],0)]));
        PD[p]=aux;
    }
    return PD[u]=aux;
}

int dijkstra(){
    int k,tam,min,u,w;
    bool cnx;
    memset(d,0x3f,(V+1)*sizeof(int));
    memset(vis,false,(V+1)*sizeof(bool));
    d[1]=tot[1];
    vis[1]=true;
    k=1;
    while(!vis[V]){
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
    if(vis[V])
        return d[V];
    else
        return -1;
}


int main(){
    while(scanf("%d %d %d %d",&m,&V,&E,&k)&& (m||V||E||k)){
        for(i=1; i<=V; i++){
            G[i].clear();
            monstros[i].clear();
        }
        for(i=1; i<=m; i++){
			Read(mana[i]);
			Read(dano[i]);
		}
        for(i=0; i<E; i++){
			Read(a);
			Read(b);
            G[a].push_back(b);
            G[b].push_back(a);
        }
        for(i=0; i<k; i++){
			Read(sl);
			Read(vida);
            monstros[sl].push_back(vida);
        }
        ehPD();
        for(i=1; i<=V; i++){
            sum=0;
            int tam=monstros[i].size();
            for(int j=0; j<tam; j++)
                sum+=PD[monstros[i][j]];
            tot[i]=sum;
        }
        printf("%d\n",dijkstra());

    }
    return 0;
}
