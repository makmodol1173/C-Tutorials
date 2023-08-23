#include <bits/stdc++.h>

using namespace std;



int main()
{
  int row,col,n;
  cin>>n;
  for(row=1;row<=n;row++)
  {
    for(col=1;col<=n;col++)
    {
        if(row==(n+1)/2 && col==(n+1)/2)
            cout<<"X";
        else if(row==col )
            cout<<"\\";
        else if(row+col==n+1)
            cout<<"/";
        else
            cout<<" ";
    }
    cout<<endl;;
  }
    return 0;
}
