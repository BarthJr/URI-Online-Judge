// https://www.urionlinejudge.com.br/judge/en/problems/view/1401
#include <algorithm>
#include <cstdio>
#include <cmath>
#include<cctype>
#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include<ctime>
using namespace std;

#define ll long long
#define ld long double
#define ii pair<int,int>

#define fox(i,N) for (i=0; i<N; i++)
#define fox1(i,N) for (i=1; i<=N; i++)
#define foxi(i,a,b) for (i=a; i<=b; i++)
#define foxR(i,N) for (i=N-1; i>=0; i--)
#define foxR1(i,N) for (i=N; i>0; i--)
#define foxRI(i,a,b) for (i=b; i>=a; i--)
#define foxen(i,s) for (i=s.begin(); i!=s.end(); i++)
#define Min(a,b) a=min(a,b)
#define Max(a,b) a=max(a,b)
#define sz(s) int((s).size())
#define clr(s) memset(s,0,sizeof(s))
#define cdp(s) memset(s,-1,sizeof(s))
#define cdi(s) memset(s,0x3f,sizeof(s))
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define MX 12
const int INF = (int)1e9;

int n,i,tam,j;
char v[MX];
int main(){
    scanf("%d",&n);
    fox(i,n){
        scanf("%s",v);
        tam=strlen(v);
        sort(v,v+tam);
        do{
            fox(j,tam)
                printf("%c",v[j]);
            printf("\n");
        }while(next_permutation(v,v+tam));
        printf("\n");
    }
    return 0;
}
