#include<stdio.h>
#include<string.h>
    int sum(int count){  
    int m=5,ma=1;  
    for(int i=0;i<count;i++){  
        ma=ma*2;  
        m=m+5*ma;  
    }  
    return m;  
}  
int xn(int count){  
    int y=1;  
    for(int i=0;i<count;++i){  
        y=y*2;  
    }  
    return y;  
}  
int main()  
{  
    int n,count;  
    while(scanf("%d", &n)!=EOF)
	{
 int x=5,y=1,res=0;  
    if(n<6){  
        res=n;  
    }  
    else  
    {  
        count=0;  
        while(n>sum(count)){  
            count++;  
        }  
        count=count-1;  
        n=n-sum(count);  
        res=(n-1)/xn(count+1)+1;  
  
    }  
    if(res==1)
	printf("Sheldon\n");  
    if(res==2)
	printf("Leonard\n"); 
    if(res==3)
   	printf("Penny\n"); 
    if(res==4)
		printf("Rajesh\n"); 
    if(res==5) 
		printf("Howard\n"); 
	} 
  return 0;  
}   
