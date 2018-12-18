#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=1e3,INF=1e9;
 
int W[maxn][maxn],n;
int Lx[maxn],Ly[maxn];//���� 
int Left[maxn];//�ұߵ�i�����Ӧ����ߵĵ�ı�� 
bool S[maxn],T[maxn];//�Ƿ�������· 
 
bool match(int i){
	S[i]=true;
	for(int j=1;j<=n;j++)if(Lx[i]+Ly[j]==W[i][j] && !T[j]){//i��j���� �� jδ������ 
		T[j]=true;
		if(!Left[j] || match(Left[j])){ //jδ��� ���� ͨ��j�����Ҵ�����· 
			Left[j]=i;return true;
		}
	}
	return false;
}
void update(){//���¶��� 
	int a=INF;
	for(int i=1;i<=n;i++)if(S[i]){
		for(int j=1;j<=n;j++)if(!T[j])a=min(a,Lx[i]+Ly[j]-W[i][j]);//i������· �� j��������·�� 
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
