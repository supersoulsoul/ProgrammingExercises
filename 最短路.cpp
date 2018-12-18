#include <stdio.h>
int main(){
	int d1,d2,d3;
	while(scanf("%d%d%d",&d1,&d2,&d3)!=EOF)
	{
		int s;
		if(d3>d1+d2)
		s=d1*2+d2*2;
		else if(d1>d2+d3)
		s=d2*2+d3*2;	
		else if(d2>d1+d3)
		s=d1*2+d3*2;
		else
		s=d1+d2+d3;	
		
		printf("%d",s);
	}
return 0;
}