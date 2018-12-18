#include<stdio.h>
int main()
{
	double c,a,s,d,f,z;
	int i;
	while(~scanf("%lf%lf%lf%lf",&a,&s,&d,&f)&&a!=0)
	{
		z=0;
		c=s*(f/100);
		for(i=1;;i++)
		{
			z=z+s;s=s-c;
			if(z>a)
			{
				printf("success on day %d\n",i);
				break;
			}
			z=z-d;
			if(z<0)
			{
				printf("failure on day %d\n",i);
				break;
			}
		}
	}
	return 0; 
}