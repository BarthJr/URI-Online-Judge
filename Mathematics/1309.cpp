// https://www.urionlinejudge.com.br/judge/en/problems/view/1309
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	int pr,tam,sum;
	char s[11],cnt[4];
	bool ok;
	while(scanf("%s %s",s,cnt)!=EOF){
		tam=strlen(s);
		if(tam%3==0)
			pr=3;
		else
			pr=tam%3;
		printf("$");
		for(int j=0; j<pr; j++)
				printf("%c",s[j]);
		ok=true;
		sum=0;
		for(int i=pr; i<tam; i++){
			if(ok){
				printf(",");
				ok=false;
			}
			printf("%c",s[i]);
			sum++;
			if(sum==3){
				ok=true;
				sum=0;
			}
		}
		tam=strlen(cnt);
		if(tam==1)
			printf(".0%c\n",cnt[0]);
		else if(tam>1)
			printf(".%c%c\n",cnt[0],cnt[1]);
	}
	return 0;
}
