// https://www.urionlinejudge.com.br/judge/en/problems/view/1609
#include <algorithm>
#include <cstdio>
#include <cctype>
#include <cmath>
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
#define MX 20
#define GETCHAR getchar_unlocked
const int INF = (int)1e9;


inline void Read(int &x){
    char c,r=0,n=0;
    x=0;
        for(;;){
            c=GETCHAR();
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
	int tam,i,x,n,num,a;
	set<int> st;

	Read(n);
	while(n--){
		Read(x);
		fox(i,x){
			Read(a);
			st.insert(a);
		}
		tam=st.size();
		printf("%d\n",tam);
		st.clear();
	}
	return 0;
}