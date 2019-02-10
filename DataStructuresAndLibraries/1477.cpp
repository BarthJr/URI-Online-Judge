// https://www.urionlinejudge.com.br/judge/en/problems/view/1477
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int n,m;
int tree[10*100003][2];
int needsUp[10*100003];
int qVec[3];

inline void desloc(int raiz,int l, int r, int qtd) {
        int v1=tree[raiz][0];
        int v2=tree[raiz][1];
        int v0=(r-l+1)-v1-v2;

        if (qtd==1) {
                tree[raiz][0]=v0;
                tree[raiz][1]=v1;
        }
        else
                if (qtd==2) {
                        tree[raiz][0]=v2;
                        tree[raiz][1]=v0;
                }
}

inline void propaga(int raiz, int l, int r) {
        desloc(raiz,l,r,needsUp[raiz]);

        if (l<r) {
                needsUp[2*raiz+1]+=needsUp[raiz];
                if (needsUp[2*raiz+1]>=3) needsUp[2*raiz+1]-=3;
                needsUp[2*raiz+2]+=needsUp[raiz];
                if (needsUp[2*raiz+2]>=3) needsUp[2*raiz+2]-=3;
        }
        needsUp[raiz]=0;
}

void atualiza(int raiz, int l, int r, int ql, int qr) {
        if (ql<=l && qr>=r) {
                desloc(raiz,l,r,1);

                if (l<r) {
                        needsUp[2*raiz+1]++;
                        if (needsUp[2*raiz+1]>=3) needsUp[2*raiz+1]-=3;
                        needsUp[2*raiz+2]++;
                        if (needsUp[2*raiz+2]>=3) needsUp[2*raiz+2]-=3;
                }
                return;
        }

        int mid=(l+r)/2;

        if (ql<=mid) atualiza(2*raiz+1,l,mid,ql,min(qr,mid));
        if (qr>mid) atualiza(2*raiz+2,mid+1,r,max(mid+1,ql),qr);

        propaga(2*raiz+1,l,mid);
        propaga(2*raiz+2,mid+1,r);

        tree[raiz][0]=tree[2*raiz+1][0]+tree[2*raiz+2][0];
        tree[raiz][1]=tree[2*raiz+1][1]+tree[2*raiz+2][1];
}

void query(int raiz, int l, int r, int ql, int qr) {
        propaga(raiz,l,r);

        if (ql<=l && qr>=r) {
                qVec[1]+=tree[raiz][0];
                qVec[2]+=tree[raiz][1];
                return;
        }

        int mid=(l+r)/2;

        if (ql<=mid) query(2*raiz+1,l,mid,ql,min(qr,mid));
        if (qr>mid) query(2*raiz+2,mid+1,r,max(mid+1,ql),qr);
}

int main() {
        while (scanf("%d %d", &n,&m)!=EOF) {
                memset(tree,0,sizeof(tree));
                memset(needsUp,0,sizeof(needsUp));

                for (int i=0; i<m; i++) {
                        char c; int a,b;
                        scanf(" %c %d %d", &c,&a,&b);
                        a--, b--;

                        if (c=='M')
                                atualiza(0,0,n-1,a,b);
                        else {
                                qVec[1]=qVec[2]=0;
                                query(0,0,n-1,a,b);
                                qVec[0]=(b-a+1)-qVec[1]-qVec[2];

                                printf("%d %d %d\n", qVec[0],
                                        qVec[1], qVec[2]);
                        }
                }
                printf("\n");
        }

        return 0;
}
