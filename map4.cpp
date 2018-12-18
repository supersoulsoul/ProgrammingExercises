   #include <iostream>  
    #include <cstring>  
    #include <map>  
    using namespace std;  
    int main()  
    {  
        int n;  
        cin>>n; 
		 map<string,int>m1,m2;  
    	 string name[1010];  
   		 int score[1010];   
        for(int i=0; i<n; i++)  
        {  
            cin>>name[i]>>score[i];  
            m1[name[i]]+=score[i];  
        }  
        int max=-1005;  
        for(int i=0;i<n;i++)  
        {  
            if(m1[name[i]]>max)  
                max=m1[name[i]];  
        }  
        for(int i=0;i<n;i++)  
        {  
            m2[name[i]]+=score[i];  
            if(m2[name[i]]>=max&&m1[name[i]]>=max)  
            {  
                cout<<name[i]<<endl;  
                break;  
            }  
        }  
        return 0;  
    }  