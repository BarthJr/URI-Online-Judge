// https://www.urionlinejudge.com.br/judge/en/problems/view/1383

#include <cstdio>
using namespace std;
#define maxl 10
#define maxc 10

	int i,j,n;
	int w[maxl][maxc];
	int v[maxl];

void le_cont_m(int w[maxl][maxc])
{
	int i,j;
	for (i=1; i<=maxl-1; i++){
		for (j=1; j<=maxc-1; j++)
			scanf("%d",&w[i][j]);

	}
}

bool linha (int w[][maxc]){
	int i=1,j,soma=0;
	bool eh_sudoku=true;

	while ((i <= maxl-1) and eh_sudoku)
	{
		j=1;
		while ((j <= maxc-1) and eh_sudoku)
		{
			soma+=w[i][j];
			j+=1;
		}
		i+=1;
		if (soma != 45)
			eh_sudoku=false;
		soma=0;

	}
	return eh_sudoku;
}

bool coluna (int w[maxl][maxc]){
	int i=1,j,soma=0;
	bool eh_sudoku=true;

	while ((i <= maxl-1) and eh_sudoku)
	{
		j=1;
		while ((j <= maxc-1) and eh_sudoku)
		{
			soma+=w[j][i];
			j+=1;
		}
		i+=1;
		if (soma != 45)
			eh_sudoku=false;
		soma=0;
	}
	return eh_sudoku;
}

void repete_sudokinhos(int w[maxl][maxc], int inii, int fimi, bool &eh_sudoku, int inij, int fimj, int &soma){
	int i,j;
	i=inii;
	while (i <= fimi)
	{
		j=inij;
		while (j <= fimj)
		{
			soma+=w[j][i];
			j+=1;
		}
		i+=1;
	}
	inij+=3;
	fimj+=3;
}
bool sudokinhos (int w[maxl][maxc]){
	int soma=0;
	bool eh_sudoku=true;

	repete_sudokinhos(w,1,3,eh_sudoku,1,3,soma);
	if (soma != 45){
			eh_sudoku=false;
	}
	soma=0;
	repete_sudokinhos(w,4,6,eh_sudoku,1,3,soma);
	if (soma != 45){
			eh_sudoku=false;
	}
	soma=0;
	repete_sudokinhos(w,7,9,eh_sudoku,1,3,soma);
	if (soma != 45){
			eh_sudoku=false;
	}
	soma=0;

	repete_sudokinhos(w,1,3,eh_sudoku,4,6,soma);
	if (soma != 45){
			eh_sudoku=false;
	}
	soma=0;
	repete_sudokinhos(w,4,6,eh_sudoku,4,6,soma);
	if (soma != 45){
			eh_sudoku=false;
	}
	soma=0;
	repete_sudokinhos(w,7,9,eh_sudoku,4,6,soma);
	if (soma != 45){
			eh_sudoku=false;
	}
	soma=0;
	repete_sudokinhos(w,1,3,eh_sudoku,7,9,soma);
	if (soma != 45){
			eh_sudoku=false;
	}
	soma=0;
	repete_sudokinhos(w,4,6,eh_sudoku,7,9,soma);
	if (soma != 45){
			eh_sudoku=false;
	}
	soma=0;
	repete_sudokinhos(w,7,9,eh_sudoku,7,9,soma);
	if (soma != 45){
			eh_sudoku=false;
	}
	soma=0;
	return eh_sudoku;
}

bool repetidos (int w[maxl][maxc], int v[maxl]){
	int l,c;
	 bool repetido;

	repetido=false;
	for (l=1; l<=maxl-1; l++)
		v[l]=0;
	for (l=1; l<=maxl-1; l++)
		for (c=1; c<=maxc-1; c++)
			v[w[l][c]]+= 1;
	for (l=1; l<=maxl-1; l++)
		if (v[l] != 9)
			repetido=true;
	return repetido;
}
int main(){

	scanf("%d",&n);
	for (i=1; i<=n; i++){
		le_cont_m(w);
		printf("Instancia %d\n",i);
		if (linha(w) && coluna(w) && sudokinhos(w) && not repetidos(w,v))
			printf("SIM\n\n");
		else
			printf("NAO\n\n");
	}
}
