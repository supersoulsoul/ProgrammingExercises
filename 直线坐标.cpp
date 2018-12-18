#include<stdio.h>
#include<math.h>
int abs(int x); 
int main()
{
	int x,y;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		int x1=0,y1=0,x2=0,y2=0;
	    if(x>0&&y>0)
	    {
    		x1=0;
    		y1=x+y;
    		x2=y1;
    		y2=0;
    	}
    	 else if(x>0&&y<0)
	    {
    		x1=0;
    		y1=-(abs(x)+abs(y));
    		x2=-y1;
    		y2=0;
    	}
    	else if(x<0&&y>0)
    	{
	    	x1=0;
    		y1=abs(x)+y;
    		x2=-y1;
    		y2=0;
	    }
	    else if(x<0&&y<0)
    	{
	    	x1=0;
    		y1=-(abs(x)+abs(y));
    		x2=y1;
    		y2=0;
	    }
	   if(x1<x2)
	   printf("%d %d %d %d\n",x1,y1,x2,y2);
	   else
	   printf("%d %d %d %d\n",x2,y2,x1,y1);
	}
	return 0;
}
