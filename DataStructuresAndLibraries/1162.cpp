// https://www.urionlinejudge.com.br/judge/en/problems/view/1162
#include <cstdio>
#include <cstring>
#define INF 0x3f3f3f3f

int troc,i,j,k,cont,tam;
int v[100];

void merge(int ini, int meio, int fim){
    int n1= meio-ini+1;
    int n2= fim-meio;
    int esq[n1+1], dir[n2+1];
    for (i=0; i<n1; i++)
        esq[i]= v[ini+i];
    for (j=0; j<n2; j++)
        dir[j] = v[meio+1+j];
    esq[n1]= INF;
    dir[n2]= INF;
    i=0, j=0;
    for (k=ini; k<=fim; k++)
        if (esq[i] <= dir[j])
            v[k]= esq[i++];
        else{
            troc+= ((meio+1)-(ini+i));
            v[k]= dir[j++];
        }
}
void merge_sort(int ini, int fim){
    if (ini < fim){
        int meio= (ini+fim)/2;
        merge_sort(ini,meio);
        merge_sort(meio+1,fim);
        merge(ini,meio,fim);
    }
}
int main(){
    int tests;
    scanf("%d", &tests);
	for(cont=0; cont<tests; cont++){
		scanf("%d", &tam);
		for (int i=0; i<tam; i++)
		    scanf("%d",&v[i]);
		troc= 0;
		merge_sort(0,tam-1);
		printf("Optimal train swapping takes %d swaps.\n",troc);
	}
    return 0;
}
