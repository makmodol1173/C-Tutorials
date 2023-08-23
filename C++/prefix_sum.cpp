#include <bits/stdc++.h>

using namespace std;



int main()
{
    long long int n,sum=0;
    cin>>n;
    vector<long long> v(n),v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        sum= sum + v[i];
        v1.push_back(sum);
    }
    v1.erase(v1.begin(),v1.end()-n);

    for(int i=n-1; i>=0; i--)
    {
        cout<<v1[i]<<" ";
    }

    return 0;
}
