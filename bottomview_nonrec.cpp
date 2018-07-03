#include<bits/stdc++.h>
using namespace std;
struct node
{
int d;
struct node*l;
struct node*r;
};
map<int,int>m;
void bottomview(struct node*root,int height)
{
queue< pair<struct node*,int> >q;
q.push(make_pair(root,0));
while(q.size()>0)
{
struct node*dt=(q.front()).first;
int ht=(q.front()).second;
q.pop();
m[ht]=dt->d;
if(dt->l)
q.push(make_pair(dt->l,ht-1));
if(dt->r)
q.push(make_pair(dt->r,ht+1));
//cout<<"pop";
}
}

struct node* newn(int d)
{
struct node*x=new node();
x->d=d;
x->l=NULL;
x->r=NULL;
return x;
}
int main()
{
struct node *x=new node();
x->d=5;
x->l=newn(6);
x->r=newn(7);
x->l->l=newn(7);
x->l->r=newn(8);
x->r->l=newn(10);
x->r->r=newn(2);
x->r->r->l=newn(14);
x->l->r->l=newn(12);
int c=0;
bottomview(x,0);
map<int,int>::iterator it;
for( it=m.begin();it!=m.end();it++)
cout<<it->second<<" ";
}
