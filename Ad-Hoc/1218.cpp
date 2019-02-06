// https://www.urionlinejudge.com.br/judge/en/problems/view/1218
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

    char n[2];
    char pares[10000];
    int tam,i,fem,masc,test=1;
    scanf("%s ",n);
    if (n){
        fem=0;
        masc=0;
        gets(pares);
        tam=strlen(pares);
        for(i=0; i<tam; i++)
            if(n[0]==pares[i] && n[1]==pares[i+1]){
                if(pares[i+3]=='F')
                    fem++;
                else
                    masc++;
                i+=4;
            }
        printf("Caso %d:\n",test++);
        printf("Pares Iguais: %d\n",fem+masc);
        printf("F: %d\n",fem);
        printf("M: %d\n",masc);

    }
    while(scanf("%s ",n)!=EOF){

        fem=0;
        masc=0;
        gets(pares);
        tam=strlen(pares);
        for(i=0; i<tam; i++)
            if(n[0]==pares[i] && n[1]==pares[i+1]){
                if(pares[i+3]=='F')
                    fem++;
                else
                    masc++;
                i+=4;
	   }
        printf("\n");
        printf("Caso %d:\n",test++);
        printf("Pares Iguais: %d\n",fem+masc);
        printf("F: %d\n",fem);
        printf("M: %d\n",masc);
    }

    return 0;
}
