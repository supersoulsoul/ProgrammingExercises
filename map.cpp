#include<stdio.h>  
#include<iostream>  
#include<algorithm>  
#include<string.h>  
#include<stdlib.h>  
#include<string>  
#include<math.h>  
#include<ctype.h>  
#include<climits>  
#include<vector>  
#include<map>  
#include<set>  
#include<queue>  
#include<functional>  
#define stop while(1);  
#define lowbit(x) (x&(-x))  
#define eps (1e-8)  
#define pi (acos(-1.0))  
#define maxint INT_MAX  
#define maxlong 0xFFFFFFFFFFFFFFFLL   
using namespace std;  
typedef unsigned long long u64;  
int main()  
{  
    int n,i;  
    while(cin>>n,n)  
    {  
        map<string,int>mm;  
        map<string,int>::iterator it;  
        string ch,ans;  
        for(i=0;i<n;i++){  
            cin>>ch;  
            mm[ch]++;  
        }  
        int cnt=0;  
        for(it=mm.begin();it!=mm.end();it++)  
            if(it->second>cnt){  
                cnt= it->second;  
                ans= it->first;  
            }      
        cout<<ans<<endl;  
    }  
}   
