#include<stdio.h>
#include<algorithm>
using namespace std;
/*void sort(int a[],int t)
{
	int temp=0;
	for(int i=0;i<t-1;i++)
	{
		for(int j=0;j<t-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}*/
struct homework
{
	int time;
	int score;
};
int cmp(homework a,homework b)
{
	if(a.score!=b.score)
	return a.score>b.score;
	else
	return a.time<b.time;
}
int main()
{
	int n;
	homework a[1001];
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			int t;
			scanf("%d",&t);
			for(int i=0;i<t;i++)
			{
				scanf("%d",&a[i].time);
			}
				for(int i=0;i<t;i++)
			{
				scanf("%d",&a[i].score);
			}
			sort(a,a+t,cmp);
			int num[1001]={0},sum=0,flag;
		    for(int i=0;i<t;i++)
		    {
    			for(int j=a[i].time;j>0;j--)
    			{
    				flag=0;
			    	if(num[j]==0)
			    	{
	    				num[j]=1;
	    				flag++;
	    				break;
	    			}
	    			
			    }
			    if(flag==0)
	    			sum+=a[i].score;
    		}
    		printf("%d\n",sum);
		}
	}
	return 0;
} 