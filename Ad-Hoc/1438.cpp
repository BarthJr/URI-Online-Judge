// https://www.urionlinejudge.com.br/judge/en/problems/view/1438
#include <cstdio>
#include<vector>
using namespace std;
#define min(a, b) (a < b ? a : b)
#define VMAX 1002
int main (){
	int i,j,n,p,dir,esq,s,h,c,num;
	while (scanf("%d %d",&n,&p) && (n || p)) {
		vector <int> v;
        	for (i=0; i<p; i++) {
            		scanf ("%d",&num);
			v.push_back(num);
            		for (j=0; j<v.back(); j++) {
                		scanf("%d",&c);
                		if(c==1) {
                    			s=i;
                    			h= j+1;
                		}
            		}
        }
        dir= v[s]-h;
        for (i = s+1; i<p && v[i] >= h; i++)
		dir+= (v[i]-h+1);
	esq= v[s]-h;
        for (i= s-1; i >= 0 && v[i] >= h; i--)
		esq+= (v[i]-h+1);

        printf("%d\n",min(dir,esq));
        v.clear();
    }

    return 0;
}
