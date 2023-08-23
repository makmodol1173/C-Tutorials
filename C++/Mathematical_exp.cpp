#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,d;
    char c,k;
    cin>>a>>c>>b>>k>>d;
    
    if(c=='+')
    {
        if(a+b==d)
        {
       cout <<"Yes"<<endl; 
        }
        else{
            int u=a+b;
            cout<<u<<endl;
        } 
    }
    else if(c=='-')
    {
       if(a-b==d)
        {
       cout <<"Yes"<<endl; 
        }
        else{
            int u=a-b;
            cout<<u<<endl;
        } 
    }
    else if(c=='*')
    {
       if(a*b==d)
        {
       cout <<"Yes"<<endl; 
        }
        else{
            int u=a*b;
            cout<<u<<endl;
        }   
    }
    return 0;
}