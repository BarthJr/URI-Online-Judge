// https://www.urionlinejudge.com.br/judge/en/problems/view/1088
#include <cstdio>
#include <cstring>

using namespace std;

#define fox(i,N) for (i=0; i<N; i++)
#define clr(s) memset(s,0,sizeof(s))
#define MX 100024

int i,n,a,aux;
int t[MX];

inline void Read(int &x){
	char c,r=0,n=0;
	x=0;
		for(;;){
			c=getchar_unlocked();
				if ((c=='-') && (!r))
					n=1;
				else
				if ((c>='0') && (c<='9'))
					x=(x << 3) + (x << 1) + c-'0',r=1;
				else
				if (r)
					break;
		}
		if (n)
			x=-x;
}

inline int rd(int idx){
    int sum=0;
    for(int i=idx; i; i-= i&-i)
        sum+=t[i];
    return sum;
}
inline void upd(int idx,int val){
    for(int i=idx; i<=MX; i+= i & -i)
        t[i]+=val;
}
int main(){
  Read(n);
   while(n!=0){
       clr(t);
       aux=0;
        fox(i,n){
           Read(a);
            aux+=i-rd(a);
            upd(a,1);
            aux%=2;
        }
        printf("%s\n",aux?"Marcelo":"Carlos");
       Read(n);
   }
    return 0;
}
