// https://www.urionlinejudge.com.br/judge/en/problems/view/1548
#include <algorithm>
#include <iostream>
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

int n,k,i,c;
int v[MX],w[MX];
int main(){
	scanf("%d",&n);
	while(n--){
		c=0;
		scanf("%d",&k);
		fox(i,k){
			scanf("%d",&v[i]);
			w[i]=v[i];
		}
		sort(w,w+k,greater<int>());
		fox(i,k){
			if(v[i]==w[i])
				c++;
		}
		printf("%d\n",c);
	}

	return 0;
}