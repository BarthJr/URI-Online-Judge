// https://www.urionlinejudge.com.br/judge/en/problems/view/1171
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main(){
    int n,i,num,tam,val,cont,pos,proc,posu;
    vector<int> v;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&num);
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    tam=v.size();
    val=v[0];
    vector<int> ::iterator up;
    pos=0;
    while(pos<tam){
        up=upper_bound(v.begin(),v.end(),val);
        posu=up-v.begin();
        if(pos<posu)
            proc=posu-pos;
        else
            proc=pos;
        printf("%d aparece %d vez(es)\n",val,proc);
        pos=posu;
        val=v[posu];
    }
	system("pause");
    return 0;
}
