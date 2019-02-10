// https://www.urionlinejudge.com.br/judge/en/problems/view/1507
#include<cstdio>
#include<algorithm>
#include<cstring>

#define fox(i,N) for (i=0; i<N; i++)
#define fox1(i,N) for (i=1; i<=N; i++)

using namespace std;
#define MX 100001
#define ML 101
    int i,j,k,q,num,cnt;
    char a[MX],b[ML];
int main(){
    scanf("%d",&num);
    while(num--){
        scanf("%s",a);
        int n= strlen(a);
        scanf("%d",&q);
        while(q--){
            cnt=0;
            scanf("%s",b);
            int m= strlen(b);
            i=1;
                fox1(j,n){
                    if(i>m)
                        break;
                    if(a[j-1]==b[i-1]){
                        cnt++;
                        i++;
                    }
                }
                if(cnt==m)
                    printf("Yes\n");
                else
                    printf("No\n");
        }
    }
    return 0;
}
