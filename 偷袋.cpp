#include <stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int a[105],sum=0,count1=0,count2=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
			if(a[i]%2==0)
			count1++;
			else if(a[i]%2==1)
			count2++;
		}
		if(sum%2==0)
		printf("%d\n",count1);
		else if(sum%2==1)
		printf("%d\n",count2);
	
	}
	return 0;
}