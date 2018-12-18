#include<stdio.h>
#include<string.h>
#define N 1005
 
int common(int a, int b){
  if(a<b){
    return a;
  }
  else{
    return b;
  }
}
int rest(int a, int b){
  int temp;
  if(b>a){
    temp = b; 
    b = a;
    a = temp;
  }
  return (a-b-1);
}
int main()
{
  char num1[N], num2[N], sum1[N], sum2[N]; 
  int n;
 
  while(scanf("%d", &n)!=EOF){
  	int k, i = 0, add=0;
 
    for(; i<n; i++){
      if(i){ 
        printf("\n");
      }
 
      scanf("%s%s", num1, num2);
 
      int len1 = strlen(num1); 
      int len2 = strlen(num2);
 
      int long1 = len1-1, long2 = len2-1; 
 
      add=0; //¼Ó
      if( len1 >= len2 ){
        k = long2;
        for(; k>=0; k--){
          sum2[k] = (num1[long1]-'0') + (num2[long2]-'0')+add;
          if(sum2[k]>=10){
            sum2[k] -= 10;
            add = 1;
          } 
          else{
            add = 0; 
          }
          long1--;
          long2--;
        }
        k = len1-len2-1;
        for(; k>=0; k--){
          sum1[k] = (num1[k]-'0')+add;
          if(sum1[k]>=10 && k>0){
            sum1[k] -= 10;
            add = ((num1[k]-'0')+add)/10;
          } 
          else{
            add = 0;
          }
        }
      }
      else{
        k = long1;
        for(; k>=0; k--){
          sum2[k] = (num1[long1]-'0') + (num2[long2]-'0')+add;
          if(sum2[k]>=10){
            sum2[k] -= 10;
            add = 1;
          } 
          else{
            add = 0; 
          }
          long1--;
          long2--;
        }
        k = len2-len1-1;
        for(; k>=0; k--){
          sum1[k] = (num2[k]-'0')+add;
          if(sum1[k]>=10 && k>0){
            sum1[k] -= 10;
            add = 1;
          } 
          else{
            add = 0;
          }
        }
      }
      int lenSum1 = rest(len1, len2);
      int lenSum2 = common(len1, len2);
      printf("Case %d:\n", i+1);
      printf("%s + %s = ", num1, num2);
      if (add) printf("%d", add); 
      k = 0;
      for(; k<=lenSum1; k++){
        printf("%d", sum1[k]);
      }
      k = 0;
      for(; k<lenSum2; k++){
        printf("%d", sum2[k]);
      }
      printf("\n");
    }
  }
  return 0;
}