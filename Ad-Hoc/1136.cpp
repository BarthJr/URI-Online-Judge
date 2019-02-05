// https://www.urionlinejudge.com.br/judge/en/problems/view/1136
#include <cstdio>
#include <set>
#include <algorithm>
using namespace std;

int N, B, balls[91],i;
	set<int> diffs;

int main(){
	while (scanf("%d %d", &N, &B) && N){
		for (i=0; i<B; i++)
			scanf("%d", &balls[i]);
		sort(&balls[0], &balls[B]);
        for (i=B-1; i>0; i--)
            for (int j=0; j<i; j++){
                diffs.insert(balls[i] - balls[j]);
            	if ((int)diffs.size() == N){
                	printf("Y\n");
                	goto FIM;
				}
           	}
        printf("N\n");
        FIM:
        diffs.clear();
    }

    return 0;
}


