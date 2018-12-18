#include <stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int m,count=0; 
		for(int i=0;i<n;i++)
		{
			scanf("%d",&m);
			if(m==1)
			count++;
		}
		if(count>0)
		printf("-1\n");
		else
		printf("1\n");
	}
	return 0;
}