#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=1e3,INF=1e9;
 
int W[maxn][maxn],n;
int Lx[maxn],Ly[maxn];//顶标 
int Left[maxn];//右边第i个点对应的左边的点的编号 
bool S[maxn],T[maxn];//是否在增广路 
 
bool match(int i){
	S[i]=true;
	for(int j=1;j<=n;j++)if(Lx[i]+Ly[j]==W[i][j] && !T[j]){//i到j可行 且 j未被访问 
		T[j]=true;
		if(!Left[j] || match(Left[j])){ //j未标记 或者 通过j可以找打增广路 
			Left[j]=i;return true;
		}
	}
	return false;
}
void update(){//更新顶标 
	int a=INF;
	for(int i=1;i<=n;i++)if(S[i]){
		for(int j=1;j<=n;j++)if(!T[j])a=min(a,Lx[i]+Ly[j]-W[i][j]);//i在增广路 且 j不在增广路中 
	}
	for(int i=1;i<=n;i++){
		if(S[i])Lx[i]-=a;
		if(T[i])Ly[i]+=a;
	}
}
void KM(){
	for(int i=1;i<=n;i++){
		Left[i]=Lx[i]=Ly[i]=0;
		for(int j=1;j<=n;j++)Lx[i]=max(Lx[i],W[i][j]);
	}
	for(int i=1;i<=n;i++){
		for(;;){
			for(int j=1;j<=n;j++)S[j]=T[j]=0;
			if(match(i))break;else update();
		}
	}
}
 
int main(){
	while(~scanf("%d",&n)){
		for(int i=1;i<=n;i++){
		    for(int j=1;j<=n;j++)scanf("%d",&W[i][j]);
	    }
	    KM();
	    int sum=0;
	    for(int i=1;i<=n;i++)sum+=W[Left[i]][i];
		printf("%d\n",sum);
	}
	return 0;
}
