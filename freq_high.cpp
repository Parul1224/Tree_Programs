#include<bits/stdc++.h>
using namespace std;
int freq[1000000];
int main()
{
int n;cin>>n;
int a[n];
int i;
for(i=0;i<n;i++)
{

cin>>a[i];
freq[a[i]]++;
}
stack<int>s;
s.push(a[0]);
for(i=1;i<n;i++)
{
while(s.size()&& freq[a[i]]>freq[s.top()])
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
