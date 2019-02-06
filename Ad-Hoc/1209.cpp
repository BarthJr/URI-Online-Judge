// https://www.urionlinejudge.com.br/judge/en/problems/view/1209
#include<cstdio>
#include<vector>
#include<list>
#include<cstring>
#include<bitset>
using namespace std;
#define fox(i,N) for (i=0; i<N; i++)
#define fox1(i,N) for (i=1; i<=N; i++)
#define foxi(i,a,b) for (i=a; i<=b; i++)
#define pb push_back
#define VMAX 1024

    int V,E,v1,v2,i,k,aux,tam,cont,x;
    vector <int> G[VMAX];
    list<int> lista;
    int amg[VMAX];
    bitset<VMAX> vis;


inline void Read(int &x){
    char c,r=0,n=0;
    x=0;
        for(;;){
            c=getchar_unlocked();
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

int main(){
    while(scanf("%d %d %d",&V,&E,&k)!= EOF){
	if(k==0){
		fox(i,E){
			Read(v1);
			Read(v2);
		}
		putchar('1');
		foxi(i,2,V)
			printf(" %d",i);
		putchar('\n');
	}else{
		cont=0;
		fox1(i,V)
		    G[i].clear();
		vis.reset();
		memset(amg,0,(V+1)*sizeof(int));
		while(E--){
		    Read(v1);
		    Read(v2);
		    G[v1].pb(v2);
		    G[v2].pb(v1);
		    amg[v1]++;
		    amg[v2]++;
		}
		fox1(i,V)
		    if(amg[i]<k){
		        lista.pb(i);
		        vis[i]=true;
		        cont++;
		    }
		while(!lista.empty()){
		    aux=lista.front();
		    lista.pop_front();
		    tam=G[aux].size();
		    fox(i,tam){
		        int u=G[aux][i];
		        amg[u]--;
		        if(!vis[u] && amg[u]<k){
		            lista.pb(u);
		            vis[u]=true;
		            cont++;
		        }
		    }
		}

		if(cont==V)
		    printf("0");
	    else{
		fox1(i,V)
		    if(!vis[i]){
		        printf("%d",i);
		        break;
		    }
		foxi(x,i+1,V)
		            if(!vis[x])
		        printf(" %d",x);
	    }
		putchar('\n');
	 }
    }
    return 0;
}