#include<stdio.h>
typedef long long ll;
int main()
{
	ll n;
	while(scanf("%I64d",&n)!=EOF)
	{
		if(n==1||n==2)
		{
			printf("-1\n");
		}
		else if(n%2==1)
		{
		printf("%I64d %I64d",(n*n)/2,((n*n)/2)+1);
		}
		else if(n%2==0)
		{
			
				printf("%I64d %I64d",(n/2)*(n/2)-1,(n/2)*(n/2)+1);
		}
	}
	return 0;
}