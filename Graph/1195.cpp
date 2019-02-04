// https://www.urionlinejudge.com.br/judge/en/problems/view/1195
#include <cstdio>
#include <cstdlib>

typedef struct Nodo{
    int v;
    Nodo *l, *r;
} nodo;

void insere(Nodo **no, int x){
    if (*no == NULL) {
        *no = (Nodo *)malloc(sizeof(Nodo));
        (*no)->v = x;
        (*no)->l = NULL;
        (*no)->r = NULL;
    }
    else if ((*no)->v > x)
        insere(&(*no)->l,x);
    else
        insere(&(*no)->r,x);
    return;
}

void emOrdem (Nodo *no){
    if (no == NULL)
        return;
    printf(" %d", no->v);
    emOrdem(no->l);
    emOrdem(no->r);
    return;
}

void preOrdem (Nodo *no){
    if (no == NULL)
        return;
    preOrdem(no->l);
    printf(" %d", no->v);
    preOrdem(no->r);
}

void posOrdem (Nodo *no){
    if (no == NULL)
        return;
    posOrdem(no->l);
    posOrdem(no->r);
    printf(" %d", no->v);
}

int main (){
    int n, i;
    scanf("%d",&n);
    for (i=0; i<n; i++){
        int j,k;
        Nodo *no = NULL;
        scanf("%d",&k);
        for (j=0; j<k; j++){
            int x;
            scanf("%d",&x);
            insere(&no,x);
        }
        printf("Case %d:\nPre.:", i+1);
        emOrdem(no);
        printf("\nIn..:");
        preOrdem(no);
        printf("\nPost:");
        posOrdem(no);
        printf("\n\n");
    }

    return 0;
}
