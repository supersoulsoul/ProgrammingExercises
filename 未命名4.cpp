#include <stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int a[100],sum=0,count1=0,count2=0,null=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=sum+a[i];
			if(a[i]%2==0)
			count1++;
			else if(sum%2==1)
			count2++;
		}
		if(sum%2==0)
		printf("%d",count1);
		else if(sum%2==1)
		printf("%d",count2);
		else
		printf("%d",null);
	}
	return 0;
}