#include<stdio.h>
#include<map>
#include<iostream>
#include<algorithm> 
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		while(n--){
			int m;
		cin>>m;
		map<string,map<string,int> >fruit;
		map<string,map<string,int> >::iterator rmb;
	    map<string,int>::iterator rmb2;
		string a,b;
		int k,num=0;
		for(int i=0;i<m;i++)
		{
			cin>>a>>b>>k;
			fruit[b][a]+=k;
		}
		for(rmb=fruit.begin();rmb!=fruit.end();rmb++)
		{
			cout<<rmb->first<<endl;
			for(rmb2=rmb->second.begin();rmb2!=rmb->second.end();rmb2++){
			 cout << "   |----" << rmb2->first << "(" << rmb2->second << ")" <<endl;

			}	
		}
		if(n<n-1)
		printf("\n");
	}
		}
		
	return 0;
}