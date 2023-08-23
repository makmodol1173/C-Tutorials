#include<bits/stdc++.h>
using namespace std;
int main()
{
    char n;
    cin>>n;
    if(n>=48 && n<=57)
    {
        cout<<"IS DIGIT"<<endl;
    }
    else
    {
        cout<<"ALPHA"<<endl;
        if(n>='a' && n<='z')
        {
            cout<<"IS SMALL"<<endl;
        }
        else if(n>='A' && n<='Z')
        {
            cout<<"IS CAPITAL"<<endl;
        }
    }
    
    return 0;
}