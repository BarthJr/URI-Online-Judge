// https://www.urionlinejudge.com.br/judge/en/problems/view/1375
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N;
	while (scanf("%d",&N) == 1){
		if (!N) break;
		vector<pair<int, int> > race;
		for (int i = 0 ; i < N; ++i) {
			int P,C;
			scanf("%d %d",&P,&C);
			race.push_back(make_pair(i+C, P));
		}
		sort(race.begin(), race.end());
		bool can = true;
		for (int i = 0; i < N; ++i)
			if (race[i].first != i ) {
				can = false;
				break;
			}
		if (!can) printf("-1\n");
		else{
			for (int i = 0; i < N; ++i) {
				if (i) printf(" ");
				printf("%d", race[i].second);
			}
			printf("\n");
		}

	}

	return 0;
}
