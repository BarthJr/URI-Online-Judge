// https://www.urionlinejudge.com.br/judge/en/problems/view/1169
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,x,i;
    unsigned long long calc;
    cin >> n;
    for(i=0; i<n; i++){
             cin >> x;
             calc= trunc(trunc(pow(2,x)/12)/1000);
             cout << calc << " kg" << endl;
    }
    return 0;
}
