/*
 *20200430
 *UVA514
 *有n节车厢按顺序从A方向驶入车站，C是中转站，判断能否让n节车厢按照特定顺序进
 *进入B方向的铁轨
 *input:
 *5
 *5 4 3 2 1
 *output
 *yes
 *input
 *5
 *5 4 1 2 3
 *output
 *no
 */

#include <cstdio>
#include <stack>
using namespace std;
const int MAXN=1000+10;

int n,target[MAXN];
int main()
{
		while(scanf("%d",&n) == 1){
				stack<int> s;
				int a=1,b=1;
				for(int i=1;i<=n;i++)scanf("%d",&target[i]);
				int ok=1;
				while(b<=n){
						if(a==target[b]){a++,b++;}
						else if(!s.empty() && s.top() == target[b]){
								s.pop();b++;}
						else if(a<=n)s.push(a++);
						else {ok=0;break;}
				}
				printf("%s\n",ok?"yes":"no");
		}

		return 0;
}
