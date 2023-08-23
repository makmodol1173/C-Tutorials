#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int t;
    cin>>t;
    vector<int>v1(t);
    for(int i=0;i<t;i++)
    {
        cin>>v1[i];
    }
    int x;
    cin>>x;
    v.insert(v.begin()+x,v1.begin(),v1.end());
    for(int i=0;i<n+t;i++)
    {
        cout<<v[i]<<" ";
    }
    
}