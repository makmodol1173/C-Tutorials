#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(auto ar:s)
        {
            if(ar=='a'||ar=='e'||ar=='i'||ar=='o'||ar=='u')
            {
                count=0;
            }
         
            else
         {
              count++;
            if(count>=4)
            {
            break;
            }

        }
            
        }
        if(count>=4)
        cout<<"NO"<<endl;
        else 
        {
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}