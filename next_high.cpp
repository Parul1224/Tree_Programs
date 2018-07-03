#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;cin>>n;int i;
int a[n];stack<int>s;
for(i=0;i<n;i++)
cin>>a[i];
s.push(a[0]);
for(i=1;i<n;i++)
{
while(s.size()&&a[i]>s.top())
{
cout<<s.top()<<" "<<a[i]<<endl;
s.pop();
}
s.push(a[i]);
}
while(s.size())
{
cout<<s.top()<<" "<<-1<<endl;
s.pop();
}
}
