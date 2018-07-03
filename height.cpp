#include<bits/stdc++.h>
using namespace std;
struct node
{
int d;
struct node*l;
struct node*r;
};
int height(struct node*root)
{
if(root==NULL)
return 0;
int lr=height(root->l);
int rr=height(root->r);
if(lr>rr)
return(lr+1);
else
return(rr+1);
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
int h=height(x);
cout<<h;
}

