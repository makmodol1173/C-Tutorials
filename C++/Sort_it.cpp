#include<bits/stdc++.h>
using namespace std;
class student
{ 
    public:
    string name;
    int cls,id,m_mark,e_mark;
    char sec;
    int t_mark;
};
bool cmp(student a,student b)
{
    if(a.t_mark!=b.t_mark)
    return a.t_mark>b.t_mark;
    else
    return a.id<b.id;
}
int main()
{
    int n;
    cin>>n;
student s[n];

for(int i=0;i<n;i++)
{
    cin>>s[i].name>>s[i].cls>>s[i].sec>>s[i].id>>s[i].m_mark>>s[i].e_mark;
} 

for(int i=0;i<n;i++)
{
   s[i].t_mark=s[i].m_mark+s[i].e_mark;
}
sort(s,s+n,cmp);

for(int i=0;i<n;i++)
{
    cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].sec<<" "<<s[i].id<<" "<<s[i].m_mark<<" "<<s[i].e_mark<<endl;
}

}