#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int sum=n;
		for(int i=1;i<n;i++)
		{
			sum+=i*(n-i);
		}
		printf("%d",sum);
	}
	return 0;
} 