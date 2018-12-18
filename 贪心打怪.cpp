#include<stdio.h>
#include<algorithm>
using namespace std;
struct enemy
{
	double DPS;
	double HP;
};
int cmp(enemy a,enemy b)
{
	return (a.DPS/a.HP)>(b.DPS/b.HP);
} 
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		enemy loser[30];
		int sum=0;
		for(int i=0;i<n;i++)
		{
				scanf("%lf",&loser[i].DPS);
				scanf("%lf",&loser[i].HP);
	
		}
		sort(loser,loser+n,cmp);
	    for(int i = 0 ;i < n ;i++)
        {
            for(int j = i; j <n ; j++)
                sum += loser[i].HP*loser[j].DPS;
        }
		printf("%d\n",sum);
	}
	return 0;
}