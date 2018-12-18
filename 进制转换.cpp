#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF&&n!=0)
	{	 	
         int a[101],min=0,j=0;
         for(int i=0;i<n;i++)
         {
         	scanf("%d",&a[i]);  	
         }
	     min=a[0];
	     for(int i=0;i<n;i++)
	     {
     		if(a[i]<min)
     		{
		     	min=a[i];
		     	j=i;
		     }
     	}
     	int t=a[0];
     	a[0]=min;
     	a[j]=t;
     	for(int i=0;i<n;i++)
     	{
     		if(i<n-1)
	     	printf("%d ",a[i]);
	     	else
	     	printf("%d",a[i]);
	     }
	     printf("\n");
	}
	return 0;
} 