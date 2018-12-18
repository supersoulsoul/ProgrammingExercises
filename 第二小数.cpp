#include<stdio.h>
#include<stdlib.h>
int main()
{
	char n;
	while(scanf("%s",&n)!=EOF)
	{
		int a[100],b[100];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			
		} 
		qsort(a);
	}
	return 0;
}
