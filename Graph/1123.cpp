//https://www.urionlinejudge.com.br/judge/en/problems/view/1123
#include <cstdio>
#include <vector>
#include<cstring>
#include <queue>
#include<bitset>

using namespace std;

#define ii pair<int,int>
#define fox(i,N) for (i=0; i<N; i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define MX 256

int i,V,E,c,ori,u,v,p,dest,d[MX];
vector < ii > g[MX];
bitset<MX> vis;
ii at,x;

inline void dijkstra (){
        priority_queue<pair<int, int>, vector<ii >,greater<ii > > Q;
        vis.reset();
        memset(d,0x3f,(V)*sizeof(int));
        at.fi= 0;
        at.se= ori;
        vis[at.se]= true;
        Q.push (at);
        while (!Q.empty()){
                at= Q.top();
                Q.pop();
                vis[at.se]= true;
                if (at.se == dest) break;
		int tam= g[at.se].size();
		fox(i,tam){
                        x= g[at.se][i];
                        if (!vis[x.se]){
                                if (d[x.se] > (at.fi + x.fi)){
                                        d[x.se] = at.fi + x.fi;
                                        Q.push (mp(d[x.se], x.se));
                                }
                        }
                }
        }
	printf("%d\n",d[dest]);
}

int main (){
	while(scanf("%d %d %d %d",&V,&E,&c,&ori)&&(V || E || c || ori)){
               fox(i,V)
	       		g[i].clear();
                while(E--){
                        scanf("%d %d %d",&u,&v,&p);
			if((u<c && v<c) && (u == v-1 || v == u-1)){
			    if(u == v-1)
				g[u].pb(mp(p,v));
			    if(v == u-1)
				g[v].pb(mp(p,u));
			}else{
				if(u >= c && v >= c){
					g[u].pb(mp(p,v));
					g[v].pb(mp(p,u));
			       }
			    else if(u<c && v >= c)
					g[v].pb(mp(p,u));
			    else if(v<c && u >= c)
				g[u].pb(mp(p,v));
			}
                }
		dest=c-1;
                dijkstra ();
        }
        return 0;
}