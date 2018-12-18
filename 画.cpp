#include <stdio.h>
int w(int a ,int b ,int total){
	if(a+b<=total){
		return 1;
	}
	return 0;
}
int h(int a,int b,int total){
	if(a<=total&&b<=total){
		return 1;
	}
	return 0;
}

int main(){
	int a1,a2,a3,b1,b2,b3;
	int result;
	while(scanf("%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3)!=EOF)
	{
		result=0;
		result+=w(a2,a3,a1)*h(b2,b3,b1);
		result+=w(a2,a3,b1)*h(b2,b3,a1);
		result+=w(a2,b3,a1)*h(b2,a3,b1);
		result+=w(a2,b3,b1)*h(b2,a3,a1);
		result+=w(b2,a3,a1)*h(a2,b3,b1);
		result+=w(b2,a3,b1)*h(a2,b3,a1);
		result+=w(b2,b3,a1)*h(a2,a3,b1);
		result+=w(b2,b3,b1)*h(a2,a3,a1);
		if(result>0)
		printf("YES\n");
		else
		printf("NO\n");
	}

	return 0;
}