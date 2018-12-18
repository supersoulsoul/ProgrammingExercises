#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int a[10000],sum1=0;
		for (int i=0;i<n-1;i++)
		{
			scanf("%d",&a[i]);
			sum1=sum1+a[i];
		}
		printf("%d\n",(n*(1+n)/2)-sum1);
	}
	return 0;
}