// https://www.urionlinejudge.com.br/judge/en/problems/view/1104
#include <cstdio>
using namespace std;

# define max 10001
	int a,b,i,j,conta,contb;
	int v[max],w[max];

void elimina_repet(int v[max], int n){
int i;
	for (i=2; i<=n; i++)
		if (v[i-1] == v[i])
			v[i-1]=0;
}


void busca_bin(int v[max],int w[max], int a, int b)
{
	int i=1,j=1;
		while ((i <= a) && (j<=b))
		{
			if (w[j] < v[i])
				j+=1;
			else
				if (v[i] < w[j])
					i+=1;
				else{
					v[i]=0;
					w[j]=0;
					i+=1;
					j+=1;
				}
		}
}

int main(){
	while (scanf("%d %d",&a,&b) && (a or b))
	{
		for (i=1; i<=a; i++)
			scanf("%d",&v[i]);
		for (j=1; j<=b; j++)
			scanf("%d",&w[j]);

		elimina_repet(v,a);
		elimina_repet(w,b);
		busca_bin(v,w,a,b);
		conta=0;
		contb=0;
		for (i=1; i<=a; i++)
			if (v[i] == 0)
				conta+=1;
		for (j=1; j<=b; j++)
			if (w[j] == 0)
				contb+=1;
		if (a-conta < b-contb)
			printf("%d\n",a-conta);
		else
			printf("%d\n",b-contb);
	}
	return 0;
}

