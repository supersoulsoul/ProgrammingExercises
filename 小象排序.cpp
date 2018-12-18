#include<stdio.h>
void sort(long long a[], int n)
   {
   	int temp;
   	for (int j = 0; j< n - 1; j++)
        for (int i = 0; i< n - 1 - j; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
   } 
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		long long  a[100000],b[100000],x=0,t=0;
		for(int i=0;i<n;i++)
		{
			scanf("%I64d",&a[i]);
				b[i]=a[i];
		}
	sort(b,n);
	for(int j=0;j<n-1;j++)
	{
		if(b[j]!=a[j])
		t++;
	}
	   if(t>2)
		{printf("NO");}
		else 
		printf("YES");
		} 
	return 0;
	
}
