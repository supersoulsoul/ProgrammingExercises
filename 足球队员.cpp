#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	while(scanf("%s",&a)!=EOF)
	{
		int count=0;
		for(int i=0;i<strlen(a);i++)
		{
			
			if(a[i]=='0')
			{
				if(a[i+1]=='0')
				{
					count++;	
									
				}
				else
				{
					if(count>0&&count<6)
					count=0;
					continue;
				}
			}
			else if(a[i]=='1')
			{
			if(a[i+1]=='1')
				{
					count++;
								
				}
				else
				{
					if(count>0&&count<6)
					{count=0;}
					continue;
				}	
			}
		}
		if(count>=6)
		{
			printf("YES");
		}
		else
		{printf("NO");
		}
		
	}
	return 0;
}