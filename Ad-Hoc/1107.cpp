// https://www.urionlinejudge.com.br/judge/en/problems/view/1107
#include <cstdio>
using namespace std;

int main(){

	int a,c,x,ini,ant,cont;
	bool chave;

	while (scanf("%d %d",&a,&c) && (a || c)){
		ini=ant=a;
		cont=0;
		chave=false;
		for (int i=0; i<c; i++){
			scanf("%d",&x);
			if (x>ant){
				if (not chave)
					cont+= ini-ant;
				chave=true;
				ini=x;
			}else if(x<ant)
				chave=false;
			ant=x;
		}
		if (not chave)
			cont+= ini-ant;
		printf("%d\n",cont);
	}
	return 0;
}
