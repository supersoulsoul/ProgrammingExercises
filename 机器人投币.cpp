#include<stdio.h>
int l(int *a,int n,int sum);
int r(int *a,int n,int sum);
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int a[200],sum=0;
		for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	
	}
     while(sum!=0)
	 {
 			r(a,n,sum);
		l(a,n,sum);
 	}       
		
	}
	return 0;
} 
int l(int a[200],int n,int sum)
{
	for(int j=n-1;j>=0;j--)
		{
			if(j==0)
			r(a,n,sum);
			if(a[j]>0)
			{
				printf("P");
				sum--;
				if(j>1)
				{
				printf("L");
					
				}
		
			}
			else if(a[j]==0&&j>1)
			printf("L"); 
		}
		return 0;	
}
int r(int a[200],int n,int sum)
{
for(int i=0;i<n;i++)
		{
			if(i==n-1)
			l(a,n,sum);
	        if(a[i]>0)
			{
				printf("P");
				sum--;
				if(i<n-1)
				{
				printf("R");	
				}
			}
			else if(a[i]==0&&i<n-1)
			{
				printf("R");
			} 
			return 0;
		}
}