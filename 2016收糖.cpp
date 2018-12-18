#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	while(gets(a)!=NULL)
	{
		int k=0;
		if(a[5]=='w')
		{
			if(a[0]=='5'||a[0]=='6')
			k=53;
			else 
			k=52; 
		 } 
		if(a[6]=='m'||a[5]=='m')
		{
			if(a[0]=='3'&&a[1]=='0')
			k=11;
			else if(a[0]=='3'&&a[1]=='1')
			k=7;
			else 
			k=12;
		}
		printf("%d\n",k);
		
	}
	return 0;
}
//2016年的第一天是周五，一共366天 