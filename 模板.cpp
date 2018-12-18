#include<stdio.h>
int sort(int a[],int n)
{
	int t=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	}
return 0;	
} 
int main()
{
	int T;
	while(scanf("%d",&T)!=EOF)
	{
		int N,a[1001];	
		for(int j=0;j<T;j++){
			scanf("%d",&N);
			for(int i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
		
		} 
		sort(a,N);
	for(int i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
		printf("\n");}
	
	}
	return 0;
}
