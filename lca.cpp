#include<bits/stdc++.h>
using namespace std;
stack<int>s;
struct node
{
int d;
struct node*l;
struct node*r;
};
struct node* rotl(struct node*root,int a,int b)
{
if(root==NULL)
return NULL;
if(root->d==a||root->d==b)
return root;
struct node*x=rotl(root->l,a,b);
struct node*y=rotl(root->r,a,b);
if(x&&y)
{
//out<<root->d;
return root;
}

return(x!=NULL?x:y);
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
x->r=newn(24);
x->l->l=newn(7);
x->l->r=newn(8);
x->r->l=newn(10);
x->r->r=newn(2);
x->r->r->l=newn(14);
x->l->r->l=newn(12);


struct node*p=rotl(x,7,12);
cout<<p->d;


//cout<<h;
}
