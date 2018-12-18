#include<stdio.h>
int y(int a,int b)
{
	return b==0?a:y(b,a%b);
}
int bs(int a,int b)
{
	return a/y(a,b)*b;
}
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		printf("%d\n",bs(a,b));
	}
	return 0;
} 