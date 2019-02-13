// https://www.urionlinejudge.com.br/judge/en/problems/view/1512
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
using namespace std;

#define ll long long
#define ld long double
#define ii pair<int,int>

#define fox(i,N) for (i=0; i<N; i++)
#define fox1(i,N) for (i=1; i<=N; i++)
#define foxI(i,a,b) for (i=a; i<=b; i++)
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
#define MX 1024
const int INF = (int)1e9;


int MDC(int a, int b) {
           if (b==0) return a;
           return MDC(b,a%b);
}
int MMC(int a,int b){
                 return a*b/MDC(a,b);
}

int main(){
    int n,x,y,ax,ay,tot,m,m1;
    while(scanf("%d %d %d",&n,&x,&y)&& (n || x || y)){
        tot=0;
        ax=floor(n/x);
        ay=floor(n/y);
        tot=ax+ay;
        m=MMC(x,y);
        m1=floor(n/m);
        printf("%d\n",tot-m1);
    }

    return 0;
}
