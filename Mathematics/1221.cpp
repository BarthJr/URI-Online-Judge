// https://www.urionlinejudge.com.br/judge/en/problems/view/1221
# include <cstdio>
#include <cmath>
using namespace std;
int num,i;
unsigned long long n,modulo;

bool ehprimo(int n){
    int i;

    if ((n % 2) == 0)
        if (n != 2)
            return false;
        else
            return true;

    else
    {
        i=3;
        while (i <= trunc(sqrt(n)))
        {
            if ((n % i) == 0)
                return false;
            i+=2;
        }

    }
    return true;
}
int main(){
    scanf("%d",&num);
    for(i=0; i<num; i++){
        scanf("%llu",&n);
        modulo= abs(n);
        if (ehprimo(modulo))
            printf("Prime\n",n);
        else
            printf("Not Prime\n",n);
   }

}
