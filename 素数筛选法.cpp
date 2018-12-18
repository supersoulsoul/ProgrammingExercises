#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int a[101];
	memset(a,1,sizeof(int));
	a[0]=0;a[1]=0;
	for(int i=2;i<=sqrt(100);i++)
	{
		if(a[i]){
			for(int j=i+i;j<=100;j=j+i)
		{
			a[j]=0;
		}
		}
		
	}
	for(int i=2;i<101;i++)
	{
		if(a[i]) 
		cout<<i<<endl;
	}
	return 0;
} 