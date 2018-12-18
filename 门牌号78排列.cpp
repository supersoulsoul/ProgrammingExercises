#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		long long sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=pow(2,i);
		}
		printf("%I64d",sum);
	}
}
 
