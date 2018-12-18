#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
	char a[1001];
	gets(a);
	int len=strlen(a)-1,j=0;
	for(int i=0;i<=len;i++)
	{
		if(a[i]==' ')
		{
			j=i-1;
		}
		if(i==len)
		{
			j=len;
		}
		while(a[j]!=' '&&j>=0)
		{
			printf("%c",a[j]);
			j--;
		}
		if(a[i]==' ')
		printf(" ");
	}
	}
	return 0;
}