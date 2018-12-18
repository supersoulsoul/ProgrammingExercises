#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int a[10001],k=0;
		for(int m=2;m<=n;m++)
		{
			while(n%m==0)
			{
				n=n/m;
				a[k++]=m;
			}
		}
		for(int i=0;i<k;i++)
		{
			if(i<k-1)
			printf("%d*",a[i]);
			else
			printf("%d\n",a[i]);
		}
	}
	return 0;
} 