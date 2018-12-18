#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int a[10000];
	a[0]=0;a[1]=1;a[2]=1;
	int i=0,k=0,m=0;
	while(a[i]<n){
		if(i>=2)
		{a[i+1]=a[i-1]+a[i];
		i++;}
		else
		{i++;
		}
        k++;
        
	}
	if(n>3){
	printf("%d %d %d",a[k-4],a[k-3],a[k-1]);
	}
	else if(n==3)
	printf("1 1 1\n");
	else if(n==2)
	printf("0 1 1\n");
	else if(n==1)
	printf("0 0 1\n");
		else if(n==0)
		printf("0 0 0\n");
	} 

	return 0;
}