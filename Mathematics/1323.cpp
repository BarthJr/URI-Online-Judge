// https://www.urionlinejudge.com.br/judge/en/problems/view/1323
#include <iostream>
using namespace std;
int main(){

	int n,k;

	while(cin >> n && n != 0){
		k=0;
		if ( n >= 1 && n <=100){
		for (n=n; n>0 ; n--)
		k+=(n*n);
		}
		cout << k << endl;
	}
	return 0;
}
