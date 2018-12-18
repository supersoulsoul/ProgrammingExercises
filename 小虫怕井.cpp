#include<stdio.h>
int main()
{
	int n,u,d;
	while(scanf("%d%d%d",&n,&u,&d)!=EOF&&n!=0&&u!=0&&d!=0)
	{
		int t=0,s=0;
		for(;;)
		{
			s+=u;
			t++;
			if(s>=n)
			break;
			s-=d;
			t++;
		}
		printf("%d",t);
	}
	return 0;
}