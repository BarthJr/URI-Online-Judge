// https://www.urionlinejudge.com.br/judge/en/problems/view/1244
#include<cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

bool comp(string a, string b){
   		return a.length() > b.length();
}
int main(){
	int n;
	char s[3000];
  scanf("%d ",&n);
  for(int i=0; i<n; i++){
	  gets(s);
      vector<string> ltr;
      char* pch = NULL;
      pch = strtok (s," ");
      while (pch != NULL){
         ltr.push_back(pch);
         pch = strtok (NULL, " ");
      }
      stable_sort(ltr.begin(), ltr.end(), comp);
		int tam=ltr.size();
		for(int j=0; j<ltr[0].size(); j++)
				printf("%c",ltr[0][j]);
		for(int k=1; k<tam; k++){
			int tam1=ltr[k].size();
			printf(" ");
			for(int j=0; j<tam1; j++)
				printf("%c",ltr[k][j]);
		}
		printf("\n");
   }
  return 0;

}
