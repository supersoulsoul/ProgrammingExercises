#include<stdio.h>
#include<algorithm>
using namespace std;
struct food 
{
	double j;
	double f;
};
int cmp(food a,food b)
{
  	return a.j/a.f>b.j/b.f;
} 
int main()
{
	double m;int n;
	while(~scanf("%lf%d",&m,&n)&&m!=-1&&n!=-1)
	{
		food a[1001];
		for(int i=0;i<n;i++)
		{
			scanf("%lf",&a[i].j);
			scanf("%lf",&a[i].f);
		}
		sort(a,a+n,cmp);
		double s=0;
		for(int i=0;i<n;i++)
		{
			if(a[i].f<m)
			{
				m-=a[i].f;
				s+=a[i].j;
			}
			else
			{
				s+=m/a[i].f*a[i].j;
				break;
			}
		}
		printf("%.3f\n",s);
	}
	return 0;
}