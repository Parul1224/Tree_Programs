#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int a[n];
int i;
for(i=0;i<n;i++)
cin>>a[i];
deque<int>q;
for(i=0;i<k;i++)
{
while(q.size()&& (a[i]>=a[q.back()]))
{
q.pop_back();
}
q.push_back(i);
}
int x=0;
for(;i<n;i++)
{
x=q.front();
cout<<a[x]<<" ";
while(q.size()>=1 && q.front()<=i-k)
q.pop_front();
 while(q.size()&&(a[i]>=a[q.back()]))
q.pop_back();
q.push_back(i);
}
x=q.front();
cout<<a[x]<<" ";
}

