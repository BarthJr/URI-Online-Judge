// https://www.urionlinejudge.com.br/judge/en/problems/view/1243
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
#include<iostream>
using namespace std;

int main(){

	char s[10000];
	char *pch;
	int tam,i,j,cont,tam1,tot;
	double med;
	bool acaba;
	while(gets(s)){
		vector <string> ltr;
		pch = strtok (s," ");
		while(pch != NULL){
			ltr.push_back(pch);
			pch= strtok(NULL," ");
		}
		tam1=ltr.size();
		cont=tot=0;

		for(i=0; i<tam1; i++){
			tam=ltr[i].size();
			acaba=false;
			for(j=0; j<tam-1; j++){
				if(!isalpha(ltr[i][j])){
					acaba=true;
					break;
				}
			}
			if(!acaba){
				if(tam>1 && ltr[i][tam-1]=='.'){
					cont++;
					tot+=tam-1;
				}else if(isalpha(ltr[i][tam-1])){
					tot+=tam;
					cont++;
				}
			}
		}
		if(cont==0)
			printf("250\n");
		else{
			med=tot/cont;
			if(med<=3)
				printf("250\n");
			else if(med<6)
				printf("500\n");
			else
				printf("1000\n");
		}
	}

	return 0;
}