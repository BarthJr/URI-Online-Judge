// https://www.urionlinejudge.com.br/judge/en/problems/view/1547
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
#define foxi(i,a,b) for (i=a; i<=b; i++)
#define foxr(i,N) for (i=N-1; i>=0; i--)
#define foxr1(i,N) for (i=N; i>0; i--)
#define foxri(i,a,b) for (i=b; i>=a; i--)
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


int n,mn,k,qt,s,i,pos;
int main(){
	bool ganhou;
	scanf("%d",&n);
	while(n--){
		mn=INF;
		ganhou=false;
		scanf("%d %d",&qt,&s);
		fox1(i,qt){
			scanf("%d",&k);
			if((k==s) && !ganhou){
				pos=i;
				ganhou=true;
			}else{
				int c=abs(k-s);
				if((c<mn) && !ganhou){
					pos=i;
					mn=c;
				}
			}
		}
		printf("%d\n",pos);
	}

	return 0;
}