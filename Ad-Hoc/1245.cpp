// https://www.urionlinejudge.com.br/judge/en/problems/view/1245
#include<cstdio>
#include<cstring>
using namespace std;
int main (){
    int i,n,tam,tot;
	int D[31],E[31];
	char pe;
    while (scanf("%d", &n)!=EOF){
        tot=0;
		memset(D,0,31*sizeof(int));
		memset(E,0,31*sizeof(int));
        for (i=0; i<n; i++){
            scanf ("%d %c", &tam, &pe);
            if(pe=='E')
				E[tam-30]++;
			if(pe=='D')
				D[tam-30]++;
        }
        for (i=0; i<31; i++) {
            if (D[i]<=E[i])
				tot += D[i];
            else
				tot += E[i];
        }
        printf("%d\n",tot);
    }
    return 0;
}
