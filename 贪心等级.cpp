#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
struct level 
{
	int x;
	int y;
};
int cmp(level a,level b)
{
	if(a.x==b.x)
	return a.y>b.y;
	else
  	return a.x<b.x;
} 
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		level good[10000];
		int a,b,k=0;
			while(scanf("%d%d",&a,&b)!=EOF){
			good[k].x=a;
			good[k].y=b;
			k++;
			cout<<good[k-1].x<<endl;
		}
		sort(good,good+k,cmp);
		int sum=0;
		for(int i=0;i<k;i++)
		{
			if(n>0&&m>0)
			{
				sum+=good[i].y;
				n-=good[i].x;
				m--;
			}
			else
				break;
		}
		cout<<sum<<endl;
	}
	return 0;
}