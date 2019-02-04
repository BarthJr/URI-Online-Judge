//https://www.urionlinejudge.com.br/judge/en/problems/view/1029
#include <cstdio>
#include<cstdlib>
using namespace std;

int main(){
    int i,n,num;
    unsigned long long fib[41], cont[41];
    fib[0]=0;
    fib[1]=1;
	cont[0]= cont[1] = 0;
    for (i=2; i<40; i++){
        fib[i]=fib[i-1]+fib[i-2];
		cont[i]=cont[i-1]+cont[i-2]+2;
    }
    scanf("%d",&n);
    for (i=0; i<n; i++){
        scanf("%d",&num);
		printf("fib(%d) = %llu calls = ",num,cont[num]);
		printf("%llu\n",fib[num]);
    }
	system("pause");
    return 0;
}
