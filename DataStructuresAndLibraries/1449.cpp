// https://www.urionlinejudge.com.br/judge/en/problems/view/1449
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <cstdlib>
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

#define Fox(i,N) for (i=0; i<N; i++)
#define Fox1(i,N) for (i=1; i<=N; i++)
#define FoxI(i,a,b) for (i=a; i<=b; i++)
#define FoxR(i,N) for (i=N-1; i>=0; i--)
#define FoxR1(i,N) for (i=N; i>0; i--)
#define FoxRI(i,a,b) for (i=b; i>=a; i--)
#define Foxen(i,s) for (i=s.begin(); i!=s.end(); i++)
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

    char ja[MX],p[MX],st[MX];
    string jap,por,s;
    map<string,string> M;

main(){
    int t,m,n,i,j;

    scanf("%d",&t);
    while(t--){
        M.clear();
        scanf("%d %d\n",&m,&n);
        Fox(i,m){
            gets(ja);
            gets(p);
            jap=ja;
            por=p;
            M.insert(mp(jap,por));
        }
        Fox(j,n){
        	gets(st);
		char *s = strtok(st," ");
                if(M.count(s))
                    printf("%s",M[s].c_str());
                else
                    printf("%s",s);
                s= strtok(NULL," ");
            while(s){
                if(M.count(s))
                    printf(" %s",M[s].c_str());
                else
                    printf(" %s",s);
                s= strtok(NULL," ");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}