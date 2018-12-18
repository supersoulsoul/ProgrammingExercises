#include<stdio.h>
int main(){
	int n,a[101],b[100],year=2000;
	while(scanf("%d",&n)!=EOF)
	{
		int count1=0,x=1,k=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]==x)
			{
			b[k]=year+(i+1);
			k++;
			x++;	
			}
		}
		if(k==0)
		{
			printf("0");
		}
		else{
			printf("%d\n",k);
		for(int j=0;j<k;j++)
		{
			printf("%d ",b[j]);
		}
		}
		
		
	}
	return 0;
} 