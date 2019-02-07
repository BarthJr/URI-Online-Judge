// https://www.urionlinejudge.com.br/judge/en/problems/view/1472
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, dif, i;
	long long int soma,terco,cont;
	while (scanf("%d", &n) != EOF) {
		vector <long long int> dist;
		soma = 0;
		for(i=0; i<n; i++) {
			scanf("%d", &dif);
			soma+= dif;
			dist.push_back(soma);
		}
		terco= dist[n-1]/3;

		cont= 0;
		for (i=0; dist[i]<=terco; i++) {
			if(binary_search(dist.begin(), dist.end(), dist[i]+terco))
			if(binary_search(dist.begin(), dist.end(), dist[i]+2*terco))
				cont++;
		}

		printf("%lld\n", cont);
	}
	return 0;
}
