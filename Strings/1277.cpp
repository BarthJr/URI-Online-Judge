// https://www.urionlinejudge.com.br/judge/en/problems/view/1277
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<iostream>
#define ML 1024
#define MX 1024
#define fox(i,N) for (i=0; i<N; i++)
#define fox1(i,N) for (i=1; i<=N; i++)
#define pb push_back
using namespace std;

int t,n,i,tam,cnt,p,m,j;
char alunos[ML],freqs[ML];
string s1[MX];
vector <string> aln;
int main(){
	scanf("%d",&t);
	while(t--){
		aln.clear();
		scanf("%d",&n);
		fox(i,n){
			scanf("%s",alunos);
			s1[i]=string(alunos);
		}fox(i,n){
			p=m=0;
			scanf("%s",freqs);
			tam=string(freqs).size();
			fox(j,tam){
				if(freqs[j]=='P')
					p++;
				else if(freqs[j]=='M')
					m++;
				cnt=tam-m;
			}
			if((p*100/cnt)<75)
					aln.pb(s1[i]);


		}
		tam=aln.size();
			if(tam>0){
				printf("%s",aln[0].c_str());
			fox1(j,tam-1)
				printf(" %s",aln[j].c_str());
			}
			printf("\n");

	}
	return 0;
}