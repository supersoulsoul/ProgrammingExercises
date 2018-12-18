#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		
		int a[101],sum=0;
			if(n>0){
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(sum==0)
			{
				sum=a[i]*6+5;
			}
			else 
			{
				if(i>0){
						if(a[i]>a[i-1])
				sum+=(a[i]-a[i-1])*6+5;
				else
				sum+=(a[i-1]-a[i])*4+5; 
				}
			
			}
		}
		
		
		printf("%d\n",sum);
	}
			}
			
			
	return 0;
}