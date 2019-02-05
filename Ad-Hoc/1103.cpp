// https://www.urionlinejudge.com.br/judge/en/problems/view/1103
#include <cstdio>
using namespace std;

int main (){
    int h1,m1,h2,m2,hora,m,h;
	while (scanf("%d %d %d %d", &h1,&m1,&h2,&m2) && (h1 or m1 or h2 or m2))
	{
		if (h1 < h2)
		{
			h= h2-h1;
			m= m2-m1;
			hora= h*60;
			printf("%d\n",hora+m);
		}else
		if (h1 > h2)
		{
			h= (24-h1) + h2;
			m= m2-m1;
			hora= h*60;
			printf("%d\n",hora+m);
		}else
		if (h1 = h2)
		{
			if (m1 > m2)
			{
				hora= ((24-h1) + h2)*60;
				m= m2-m1;
				printf("%d\n",hora+m);

			}else
				printf("%d\n",m2-m1);

		}
	}
}

