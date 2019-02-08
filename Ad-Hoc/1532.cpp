// https://www.urionlinejudge.com.br/judge/en/problems/view/1532
#include <cstdio>

using namespace std;

int main(){
    int n,v,i,j,vel,k;
    bool achou;
    while(scanf("%d %d",&n,&v)&& (n || v)){
	    achou=false;
	    for(i=v; i>0; i--){
            vel=i;
            j=0;
            while((j<=n) && vel>0){
                k=1;
                while(k<=vel){
                j+=vel;
                    if(j==n)
                        achou=true;
                    k++;
                }
                vel--;
            }
	    }
	    if(achou)
		    printf("possivel\n");
	    else
		    printf("impossivel\n");
	}
    return 0;
}
