// https://www.urionlinejudge.com.br/judge/en/problems/view/1249
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
	int i,tam;
	char fr[54];
	while(gets(fr)){
		tam=strlen(fr);
		for(i=0; i<tam; i++){
			if(fr[i]>='a'&& fr[i]<='z'){
				if(fr[i]+13>122)
					printf("%c",((fr[i]+13)%122)+96);
				else
					printf("%c",fr[i]+13);
			}else if(fr[i]>='A'&& fr[i]<='Z'){
				if(fr[i]+13>90)
					printf("%c",((fr[i]+13)%90)+64);
				else
					printf("%c",fr[i]+13);
			}else
				printf("%c",fr[i]);
		}
		printf("\n");
	}

	return 0;
}
