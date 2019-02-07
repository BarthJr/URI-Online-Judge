// https://www.urionlinejudge.com.br/judge/en/problems/view/1410
#include <cstdio>
using namespace std;

int main ( ){
	int a,d,i,j;
	int ataque,defesa,menor,m_ataque,primeiro,segundo;

	while (scanf("%d %d",&a,&d) && (a or d))
	{
		menor=10001;
		for (i=0; i<a; i++)
		{
			scanf("%d",&ataque);
			m_ataque=ataque;
			if (m_ataque < menor)
				menor=m_ataque;
		}
		scanf("%d",&defesa);
		primeiro=defesa;
		segundo=10001;
		for (j=1; j<d; j++)
		{
			scanf("%d",&defesa);
			if (defesa <= segundo)
				if (defesa <= primeiro)
				{
					segundo=primeiro;
					primeiro=defesa;
				}
				else
					segundo=defesa;
		}
		if ((primeiro <= menor) && (segundo <= menor))
			printf("N\n");
		else
			printf("Y\n");
	}
}
