#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm> 
#include<map>
using namespace std;
struct ke{
	string lesson;
	int fen;	
};
int cmp(ke a,ke b)
{
	return a.fen>b.fen;
}
int main()
{
	int n;
	while(cin>>n)
	{
		while(n--){
		int k;
		ke b[101];
		cin>>k;
        for(int i=0;i<k;i++)
        {
        	cin>>b[i].lesson>>b[i].fen;
        }
        sort(b,b+k,cmp);
        int sum=0;
        map<string,int>s;
        for(int i=0;i<k;i++)
        {
        	if(s[b[i].lesson]<2)
        	{
	        	s[b[i].lesson]++;
	        	sum+=b[i].fen;
	        }
        }
		cout<<sum<<endl;
	}}
		
	return 0;
}