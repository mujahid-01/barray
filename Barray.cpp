#include<bits/stdc++.h>
using namespace std ;

int  main()
{ 	
    int t ;
    cin>>t ;
    while(t--)
    {
        int n ;
        cin>>n ;
        vector<int> vec  ;
        int my_int ;
        int flag ;
        for(int i = 0 ;i<n ;i++)
        {
            cin>>my_int ;
            vec.push_back(my_int);
        }
        int mul = vec.at(0)*vec.at(1) ;
        for(int i = 0 ;i<n-1 ;i++)
        {
            mul = vec.at(i)*vec.at(i+1) ;
            flag  = 0 ;
            for(int j=0;j<n;j++)
            {
               if(mul==vec.at(j))
               flag = 1 ;
            }
            if(flag!=1)
            break ;
        }
        if(flag==1)
        cout<<"yes"<<endl ;
        else
        cout<<"no"<<endl;
    }
    
}