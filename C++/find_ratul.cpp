#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int count=0;
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        if(word=="Ratul")
        {
            count=1;
            break;
        }
    }
     if(count==1)
     {
        cout<<"YES"<<endl;
     }
     else
     {
        cout<<"NO"<<endl;
     }
    
    
    return 0;
}