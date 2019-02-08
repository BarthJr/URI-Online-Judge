// https://www.urionlinejudge.com.br/judge/en/problems/view/1514
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


int main(){
    int n,m,i,j,cont;
    int w[102][102];
    bool q1,q2,q3,q4;
    while(scanf("%d %d",&n,&m)&&(n||m)){
            q1=true;
            q2=true;
            q3=true;
            q4=true;
        fox(i,n)
            fox(j,m)
                scanf("%d",&w[i][j]);
        fox(i,n){
            cont=0;
            fox(j,m)
                if(w[i][j]==1)
                    cont++;
            if(cont==m)
                q1=false;
		if(cont==0)
                q4=false;
        }
        fox(j,m){
            cont=0;
            fox(i,n)
                if(w[i][j]==1)
                    cont++;
            if(cont==0)
                q2=false;
            if(cont==n)
                q3=false;
        }
        int tot=0;
        if(q1)
            tot++;
        if(q2)
            tot++;
        if(q3)
            tot++;
        if(q4)
            tot++;
        printf("%d\n",tot);
    }



    return 0;
}