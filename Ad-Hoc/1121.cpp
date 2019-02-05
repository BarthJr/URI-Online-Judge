// https://www.urionlinejudge.com.br/judge/en/problems/view/1121
#include <cstdio>
using namespace std;
int main(){
	int n,m,s,i,j,l=0,c=0,dir=0,cont,lant,cant;
	char w[101][101];
	char ordem;
	while (scanf("%d %d %d ", &n, &m, &s) && (n || m || s)){
		cont=0;
		for (i = 0; i<n; i++)
			for (j = 0; j < m; j++){
				scanf("%c ", &w[i][j]);
				if (w[i][j]=='N'){
					dir=0;
					l=i; c=j;
					w[i][j] = '.';
				}
				else if (w[i][j]=='L'){
					dir=1;
					l=i; c=j;
					w[i][j]='.';
				}
				else if (w[i][j]=='S'){
					dir=2;
					l=i; c=j;
					w[i][j] = '.';
				}
				else if (w[i][j]=='O'){
					dir=3;
		            		l=i; c=j;
					w[i][j]='.';
				}
		    	}
		for (i=0; i<s; i++){
			scanf("%c ", &ordem);
			lant=l;
			cant=c;
			if (ordem == 'D')
				dir=(dir+1)%4;
			else if (ordem == 'E')
				if (dir==0)
					dir=3;
				else
					dir-=1;
			else if (ordem== 'F'){
				if(dir==0 && l!= 0)
					l--;
				else if (dir==1 && c!= m-1)
					c++;
				else if (dir==2 && l!= n-1)
					l++;
				else if (dir == 3 && c!= 0)
					c--;
				if (w[l][c] == '*'){
					cont++;
				w[l][c] = '.';
			}
			else if (w[l][c] == '#'){
				l=lant;
				c=cant;
			}
		}
		}
		printf("%d\n",cont);
	}
    return 0;
}
