//https://www.urionlinejudge.com.br/judge/en/problems/view/1022
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int n,i,num1,den1,num2,den2,num,den;
	int divid,divi,aux,modu;
	char frac,op;

	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d %c %d %c %d %c %d",&num1,&frac,&den1,&op,&num2,&frac,&den2);
		if(op == '*'){
			num=num1*num2;
			den=den1*den2;
		}else if(op == '/'){
			num=num1*den2;
			den=den1*num2;
		}else if (op == '+'){
			num=(num1*den2) + (den1*num2);
			den= den1*den2;
		}else{
			num=(num1*den2) - (den1*num2);
			den= den1*den2;
		}
		printf("%d/%d",num,den);
		if(num>den){
			divid=num;
				divi=den;
		}else{
			divid=den;
			divi=num;
		}
		while(divid%divi!=0){
			aux= divid%divi;
			divid=divi;
			divi=aux;
		}
		modu=abs(divi);
			printf(" = %d/%d\n",num/modu,den/modu);
	}


	return 0;
}