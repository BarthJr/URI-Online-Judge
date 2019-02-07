// https://www.urionlinejudge.com.br/judge/en/problems/view/1473
#include <cstdio>
#include <vector>
#define INF 0x3f3f3f3f
using namespace std;

int main() {
	int cont,l,c,fl,fc,i,j;
	int W[300][300];
	vector <int> i_lin;
	vector <int> i_col;
	char ok;
	while (scanf("%d %d", &l, &c) != EOF) {
		cont=0;
		ok = -1;
		i_lin.clear();
		i_col.clear();

		scanf("%d", &W[0][0]);
		fl = (W[0][0]-1)/c;
		if (!(fc = (W[0][0] % c))) fc = c;
		i_lin.push_back(fl);
		i_col.push_back(fc);
		for (j = 1; j < c; j++) {
			scanf("%d", &W[0][j]);
			if ((W[0][j]-1)/c != fl) ok = 0;
			if (!(fc = W[0][j] % c)) fc = c;
			i_col.push_back(fc);
		}

		for (i = 1; i < l; i++) {
			scanf("%d", &W[i][0]);
			fl = (W[i][0]-1)/c;
			i_lin.push_back(fl);
			if (!(fc = (W[i][0] % c))) fc = c;
			if (fc != i_col[0]) ok = 0;
			for (j = 1; j < c; j++) {
				scanf("%d", &W[i][j]);
				fl = (W[i][j]-1)/c;
				if (!(fc = (W[i][j] % c))) fc = c;
				if (fc != i_col[j] || fl != i_lin[i]) ok = 0;
			}
		}

		if (ok) {
			int temp;
			for (i = 0; i < i_lin.size(); i++) {
				for (j = 0; i+j < i_lin.size() && i_lin[i+j] != i; j++);
				if (j) {
					temp = i_lin[i+j];
					i_lin[i+j] = i_lin[i];
					i_lin[i] = temp;
					cont++;
				}
			}

			for (i = 0; i < i_col.size(); i++) {
				for (j = 0; i+j < i_col.size() && i_col[i+j] != i+1; j++);
				if (j) {
					temp = i_col[i+j];
					i_col[i+j] = i_col[i];
					i_col[i] = temp;
					cont++;
				}
			}

			printf("%d\n", cont);
		} else
			printf("*\n");
	}
	return 0;
}
