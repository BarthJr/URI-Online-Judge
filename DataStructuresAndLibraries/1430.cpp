// https://www.urionlinejudge.com.br/judge/en/problems/view/1430
#include<cstdio>
#include<cstring>
#include<map>

using namespace std;

int main(){

int tam,tot,i;
double cont;
bool ok;
char s[205];
map<char,double> mapa;

	mapa['W']=1;
	mapa['H']=0.5;
	mapa['Q']=0.25;
	mapa['E']=0.125;
	mapa['S']=0.0625;
	mapa['T']=0.03125;
	mapa['X']=0.015625;

	while(scanf("%s",s)){
		tot=cont=0;
		tam=strlen(s);
		if(tam==1 && s[0]== '*')
			break;
		else{
			for(i=0; i<tam; i++)
				if(s[i]=='/'){
						if(cont==1)
							tot++;
						cont=0;
				}else
					cont+=mapa[s[i]];
		printf("%d\n",tot);
		}
	}
	return 0;
}
