#include<stdio.h>
          #include<string.h>

		  int main(){  
    int i,k;  
    char a[210],b[210];  
    while(scanf("%s",&a)!=EOF){  
        
        k=0;   
        for(i=0;i<strlen(a);i++){  
            if(a[i]=='-'){  
                if(a[i+1]=='-'){  
                    printf("2");  
                }  
                else if(a[i+1]=='.'){  
                    printf("1"); 
                }    
                i++;  
            }  
            else if(a[i]=='.'){  
               printf("0");   
            }  
        } 
		printf("\n"); 
    }  
    return 0;  
}  