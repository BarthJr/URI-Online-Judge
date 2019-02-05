// https://www.urionlinejudge.com.br/judge/en/problems/view/1091
#include <iostream>
using namespace std;

int main( ){
	int k,i;
	int n,m,l,c;

	while ((cin >> k) && (k != 0))
	{
		cin >> c >> l;
		for (i=0; i<k; i++)
		{
			cin >> n >> m;
			if ((n == c) || (m == l))
				cout << "divisa" << endl;
			else
				if ((n > c) && (m > l))
					cout << "NE" << endl;
				else
				if ((n > c) && (m < l))
					cout << "SE" << endl;
				else
				if ((n < c) && (m > l))
					cout << "NO" << endl;
				else
					cout << "SO" << endl;
		}
	}
	return 0;
}
