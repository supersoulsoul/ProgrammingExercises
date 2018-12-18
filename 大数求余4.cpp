#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0;
	char n[100000];
	while(scanf("%s",&n)!=EOF)
	{
		int m=strlen(n);
		if(m>1)
		{
			i=(n[m-2]-'0')*10+(n[m-1]-'0');
		}
		else
		i=n[m-1]-'0';
		j=i%4;
		if(j==0)
		printf("4");
		else
		printf("0");
	}
	return 0;
} 