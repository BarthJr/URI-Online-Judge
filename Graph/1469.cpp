// https://www.urionlinejudge.com.br/judge/en/problems/view/1469
#include<cstdio>
#include<cstring>
#include<utility>
#include<vector>
using namespace std;
#define TAM 60002
#define INF 0x3f3f3f3f
#define GETCHAR getchar

vector<int> G[TAM];
bool vis[TAM];
int pos[TAM],id[TAM],mnr;

bool Read(int &x){
	char c,r=0,n=0;
	x=0;
		for(;;)
		{
			c=GETCHAR();
				if (c<0)
					return(0);
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
	return(1);
}

int DFS(int u){
    int coord;
    vis[u]=true;
    for(int i=0; i<G[u].size(); i++){
        coord=G[u][i];
        if(!vis[coord]){
            if(id[coord]<mnr)
                mnr=id[coord];
            DFS(coord);
        }
    }
}

int main(){
    int n,m,inst,i,x,y,a,b,e,j;
    char ord;
    while(scanf("%d %d %d",&n,&m,&inst)!=EOF){
        for(i=1; i<=n; i++)
            G[i].clear();
    for(i=1; i<=n; i++){
		Read(id[i]);
        pos[i]=i;
    }
        for(i=0; i<m; i++){
			Read(x);
			Read(y);
            G[y].push_back(x);
        }
        for(j=1; j<=inst; j++){
        scanf("\n");
            scanf("%c",&ord);
            if(ord=='T'){
		Read(a);
		Read(b);
        swap(id[pos[a]],id[pos[b]]);
        swap(pos[a],pos[b]);
            }else if(ord=='P'){
                memset(vis,false,(n+1)*sizeof(bool));
                mnr=INF;
		Read(e);
                DFS(pos[e]);
        if(mnr<INF)
            printf("%d\n",mnr);
        else
            printf("*\n",mnr);
            }
        }
   }
    return 0;
}
