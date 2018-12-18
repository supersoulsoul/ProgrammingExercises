#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	while(scanf("%s",&s)!=EOF)
	{
		int sum=0;
		sum=(strlen(s)+1)*25+1;
		printf("%d\n",sum);
	}
	return 0;
}
