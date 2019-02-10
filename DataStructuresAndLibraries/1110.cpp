// https://www.urionlinejudge.com.br/judge/en/problems/view/1110
#include <cstdio>
#include <cstring>
using namespace std;

int main () {
    int n,i,v[52],k=0,t;

    while (scanf("%d",&n)&& n){
	if(n==1){
		printf("Discarded cards:\n");
		printf("Remaining card: 1\n");
	}else{
		memset(v,0,(n+1)*sizeof(int));
		printf("Discarded cards:");
		i=1;
		k=1;
		v[0]=1;
		printf(" 1");
		int x=0;
		while(k < n-1) {
		    if(v[i] == 0)
		        x++;
		    if(x == 2) {
		        v[i]= 1;
		        x= 0;
		        printf(", %d",i+1);
		        k++;
		    }
		    i= (i+1)%n;
		}
		i= 0;
		printf("\n");
		while(v[i] != 0)
		    i++;
		printf("Remaining card: %d\n", i+1);
	}
    }
    return 0;
}