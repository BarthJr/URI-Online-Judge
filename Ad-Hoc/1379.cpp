// https://www.urionlinejudge.com.br/judge/en/problems/view/1379
#include<cstdio>
using namespace std;

int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)&&(a||b))
		printf("%d\n",a-b+a);
	return 0;
}