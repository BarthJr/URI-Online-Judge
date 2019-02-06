// https://www.urionlinejudge.com.br/judge/en/problems/view/1228
#include <cstdio>
#include <map>
#define INF 0x3f3f3f3f

using namespace std;

int i,j,k,cont,tam,car;
int v[26];
map <int,int> mapa;

inline void merge(int ini, int mid, int fim){
    int n1= mid-ini+1;
    int n2= fim-mid;
    int esq[n1+1], dir[n2+1];
    for (i=0; i<n1; i++)
        esq[i]= v[ini+i];
    for (j=0; j<n2; j++)
        dir[j] = v[mid+1+j];
    esq[n1]= INF;
    dir[n2]= INF;
    i=j=0;
    for (k=ini; k<=fim; k++)
        if (mapa[esq[i]] <= mapa[dir[j]])
            v[k]= esq[i++];
        else{
            cont+= ((mid+1)-(ini+i));
            v[k]= dir[j++];
        }
}
void merge_sort(int ini, int fim){
    if (ini < fim){
        int mid= (ini+fim)/2;
        merge_sort(ini,mid);
        merge_sort(mid+1,fim);
        merge(ini,mid,fim);
    }
}
int main(){
    while (scanf("%d", &tam)!=EOF){
        for (i=0; i<tam; i++)
            scanf("%d",&v[i]);
		for (i=0; i<tam; i++){
            scanf("%d",&car);
			mapa[car]=i;
		}
		mapa[INF]=INF;
		cont=0;
        merge_sort(0,tam-1);
        printf("%d\n",cont);
		mapa.clear();
    }
    return 0;
}
