#include<stdio.h>
int S(int n1,int n2,int n3,int n4,int n5)
{
	if(n1>0)
	{
		return 1;
		n1--;
	}
	else if(n2>0)
	{
			return 2;
			n2--;
	} 
	else if(n3>0)
	{
		return 3;
		n3--;
	} 
	else if(n4>0)
	{
		return 4;
		n4--;
	} 
	else if(n5>0)
	{
		return 5;
		n5--;
	} 
}
int M(int n1,int n2,int n3,int n4,int n5)
{
	if(n2>0)
	{
		return 2;
		n2--;
	}
	else if(n3>0)
	{
		return 3;
		n2--;
	} 
	else if(n4>0)
	{
		return 4;
		n4--;
	} 
	else if(n5>0)
	{
		return 5;
		n5--;
	} 
	else if(n1>0)
	{
		return 1;
		n1--;
	} 
}
int L(int n1,int n2,int n3,int n4,int n5)
{
	if(n3>0)
	{
	return 3;
	n3--;
	}
	else if(n4>0)
	{
		return 4;
		n4--;
	} 
	else if(n5>0)
	{
		return 5;
		n5--;
	} 
	else if(n2>0)
	{
		return 2;
		n2--;
	} 
	else if(n1>0)
	{
		return 1;
		n1--;
	} 
}
int XL(int n1,int n2,int n3,int n4,int n5)
{
	if(n4>0)
	{
		return 4;
		n4--;
	}
	else if(n5>0)
	{
        return 5;
        n5--;
	} 
	else if(n3>0)
	{
		return 3;
		n3--;
	} 
	else if(n2>0)
	{
		return 2;
		n2--;
	} 
	else if(n1>0)
	{
		return 1;
		n1--;
	} 
}
int XXL(int n1,int n2,int n3,int n4,int n5)
{
	if(n5>0)
	{
		return 5;
		n5--;
	}
	else if(n4>0)
	{
		return 4;
		n4--;
	} 
	else if(n3>0)
	{
		return 3;
		n3--;
	} 
	else if(n2>0)
	{
		return 2;
		n2--;
	} 
	else if(n1>0)
	{
		return 1;
		n1--;
	} 
}
int select(int i)
{
	switch(i){
		case1:printf("S\n");break;
	case2:printf("M\n");break;
	case3:printf("L\n");break;
	case4:printf("XL\n");break;
	case5:printf("XXL\n");break;
	}
	
	return 0;
}
int main(){
	int n1,n2,n3,n4,n5,x;
	char a[50][10];
	
	while(scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5)!=EOF)
	{
	
		scanf("%d",&x);
		for(int i=0;i<x;i++)
		{
				scanf("%s",&a[i]);
				if(a[i]=="S")
				{
					select(S(n1,n2,n3,n4,n5));
				}
				else if(a[i]=="M")
				{
					select(M(n1,n2,n3,n4,n5));
				}
				else if(a[i]=="L")
				{
					select(L(n1,n2,n3,n4,n5));
				}
				else if(a[i]=="XL")
				{
					select(XL(n1,n2,n3,n4,n5));
				}
				else if(a[i]=="XXL")
				{
					select(XXL(n1,n2,n3,n4,n5));
				}		
		        
		        
		}
	
	}
	return 0;
} 