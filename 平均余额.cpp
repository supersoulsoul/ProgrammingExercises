#include<stdio.h>
int main()
{
	double a[20];
		double sum=0.0,aver=0.0;
		for(int i=0;i<12;i++)
		{
			scanf("%lf",&a[i]);
			sum+=a[i];
		}
		aver=sum/12.0;
		printf("$%.2f\n",aver);
		return 0;
}