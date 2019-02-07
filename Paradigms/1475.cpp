// https://www.urionlinejudge.com.br/judge/en/problems/view/1475
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;


#define pb push_back
#define ll long long
#define fi first
#define se second
#define fox(i,N) for (i=0; i<N; i++)
#define INF 0x3f3f3f3f
typedef pair<int, int> ii;

int n, c,t1,t2,j,tam;
ll PD[1024];
vector<int> V;
vector<ii > prox;

inline ll calc(int p){
    if(p >= j + n)
        return 0;
    if(PD[p] != -1)
        return PD[p];

    ll z,r= INF;

    z= calc(prox[p].fi)+t1;
    r= min(z,r);
    z= calc(prox[p].se)+t2;
    r= min(z,r);
    return (PD[p] = r);
}

int main(){
    int i,a,b;
    ll aa;
    while(scanf("%d %d %d %d", &n,&c,&t1,&t2)!=EOF){
        ll R= INF;
	fox(i,n){
            scanf("%d", &a);
            V.pb(a);
            V.pb(a+c);
        }
        sort(V.begin(), V.end());
	tam=V.size();
	fox(i,tam){
            a = upper_bound(V.begin(), V.end(), V[i] + t1) - V.begin();
            b = upper_bound(V.begin(), V.end(), V[i] + t2) - V.begin();
            prox.pb(ii(a, b));
        }
	fox(j,n){
            memset(PD, 0xff, sizeof(PD));
            aa = calc(j);
            R = min(R, aa);
        }
        printf("%lld\n", R);
        V.clear();
        prox.clear();
    }
    return 0;
}