// https://www.urionlinejudge.com.br/judge/en/problems/view/1248
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

int main(){
    int n,i,j,tam,tam1,k;
    string st;
    char s[27],a[27];
	char ltr;
    bool acaba;
	bool tem[27];
	bool vis[27];

    scanf("%d ",&n);
    for(i=0; i<n; i++){
		memset(tem,false,sizeof(tem));
		memset(vis,false,sizeof(vis));
        acaba=false;
        gets(s);
        tam=strlen(s);
		ltr='A';
		for(j=0; j<tam; j++)
			tem[s[j]-'A']=true;
		for(j=0; j<27; j++)
			st.push_back(ltr++);
            for(j=0; j<2; j++){
                gets(a);
                tam1=strlen(a);
                for(k=0; k<tam1; k++){
                    if(!vis[a[k]-'A']){
                        vis[a[k]-'A']=true;
                        if(!tem[a[k]-'A']){
                            acaba=true;
                            break;
                        }
                    }
                    else{
                        acaba=true;
                        break;
                    }
                }
            }
        if(acaba)
            printf("CHEATER\n");
        else{
            for(j=0; j<27; j++)
                if(tem[j] && !vis[j])
                    printf("%c",st[j]);
            printf("\n");
        }
    }
    return 0;
}