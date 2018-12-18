#include<stdio.h>
#include<algorithm>
using namespace std;
struct rare
{
	int pi;
	int mi;
};
int cmp(rare a,rare b)
{
  	return a.pi>b.pi;
} 
int main()
{
	int v,n;
	while(~scanf("%d%d",&v,&n)&&v!=0)
	{
		rare good[2000];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&good[i].pi);
			scanf("%d",&good[i].mi);
		}
        sort(good,good+n,cmp);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(good[i].mi<=v)
            {
            	sum+=good[i].pi*good[i].mi;
            	v-=good[i].mi;
            }
            else
            {
            	sum+=good[i].pi*v;
            	break;
            }
        }
        printf("%d\n",sum);
	}
	return 0;
}