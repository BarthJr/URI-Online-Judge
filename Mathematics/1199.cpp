// https://www.urionlinejudge.com.br/judge/en/problems/view/1199
#include <cstdio>
#include <cstring>

using namespace std;

char s[16];
int n;

int main() {

    while(1) {
        scanf("%s",s);
        if (s[0]=='-') break;
        sscanf(s,"%i",&n);
        if (s[1]=='x')
            printf("%d\n",n);
        else
            printf("0x%X\n",n);
    }

    return 0;
}
