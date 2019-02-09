// https://www.urionlinejudge.com.br/judge/en/problems/view/1222
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    int plras,ml,mc,tam,tam1,lin,i;
    char p[72];
    while (scanf("%d %d %d",&plras,&ml,&mc) != EOF){
        tam=lin=0;
        for (i=0; i<plras; i++){
            scanf("%s", p);
            tam1= strlen(p);
            tam+= tam1+1;
            if(tam > mc+1){
                lin++;
                tam= tam1+1;
            }
            if(tam==mc || tam-1==mc){
                lin++;
                tam= 0;
            }
            else if(i==plras-1)
                lin++;
        }
        printf("%d\n",(lin+ml-1)/ml);
    }
    return 0;
}