#include<bits/stdc++.h>
using namespace std;
struct node
{
int d;
struct node*l;
struct node*r;
};
void spiral(struct node*root)
{
stack<struct node*>s1;
stack<struct node*>s2;
s1.push(root);
while(s1.size()||s2.size())
{
while(s1.size())
{
struct node*t=s1.top();
cout<<t->d<<" ";
s1.pop();
if(t->l)
s2.push(t->l);
if(t->r)
s2.push(t->r);
}
while(s2.size())
{
struct node*t=s2.top();
cout<<t->d<<" ";
s2.pop();
if(t->r)
s1.push(t->r);
if(t->l)
s1.push(t->l);
}
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
spiral(x);
}
