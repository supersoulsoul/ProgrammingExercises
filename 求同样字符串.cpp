#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int i,j;
    int b[1000],c[1000];
    char a[1000][16];
    while(scanf("%d",&n)!=EOF&&n)
    {
        int k=0,max,p=0;
        getchar();
        for(i=0;i<n;i++)
        {
            gets(a[i]);
        }
        for(i=0;i<n;i++)
        {
            int cout=1;
            for(j=i+1;j<n;j++)
            {
                if(strcmp(a[i],a[j])==0)
                {
                    cout++;
                }
            }
            b[k++]=cout;c[p++]=i;    
        }
        max=0;
        for(i=1;i<k;i++)
        {
            if(b[i]>b[max])
            max=i;
        }
        puts(a[c[max]]);
    }
}