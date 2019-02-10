// https://www.urionlinejudge.com.br/judge/en/problems/view/1332
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int n,i;
	char palavra[7];
	char one[] = "one", two[] ="two";
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%s",palavra);
		if (strlen(palavra) == 5)
			printf("3\n");
		else
			if((palavra[0] != 'o') && (palavra[1] == 'n'))
				printf("1\n");
			else if((palavra[0] == 'o') && (palavra[1] != 'n' || palavra[1] == 'n'))
				printf("1\n");
				else
					printf("2\n");
	}
	return 0;
}
