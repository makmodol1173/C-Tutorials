#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
    bool a=true;
    vector<int> v(n),v1(n);
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
       }
    
    v1=v;
    sort(v1.begin(), v1.end());
    for(int i=0;i<n;i++)
    {
       
       if(v1[i]!=v[i])
       {
         a=false;
       } 
        
    }
        if(a==true)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    
    }
    
    return 0;
}