#include<bits/stdc++.h>
using namespace std;
stack<int>s;
struct node
{
int d;
struct node*l;
struct node*r;
};
bool rotl(struct node*root,int sum)
{
if(root==NULL)
return false;
if(root->l==NULL&&root->r==NULL)
{
if(sum==root->d)
{
cout<<root->d<<" ";
return true;
}
else
return false;
}
if(rotl(root->l,sum-root->d)||rotl(root->r,sum-root->d))
{
//s.push(root->d);
cout<<root->d<<" ";
return true;
}
return false;
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


rotl(x,21);


//cout<<h;
}
