
#include<bits/stdc++.h>
using namespace std;
struct node
{
int d;
struct node*l;
struct node*r;
};



struct node* newn(int d)
{
struct node*x=new node();
x->d=d;
x->l=NULL;
x->r=NULL;
return x;
}
bool checkmirror(struct node*root1,struct node*root2)
{
if(root1==NULL && root2==NULL)
return true;
if((root1==NULL && root2!=NULL)||(root1!=NULL && root2==NULL))
return false;
if(root1->d!=root2->d)
return false;
return(checkmirror(root1->l,root2->r)&&checkmirror(root1->r,root2->l));
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
struct node *y=new node();
y->d=5;
y->r=newn(6);
y->l=newn(7);
y->l->l=newn(8);
y->l->r=newn(7);
y->l->l->r=newn(12);
y->r->r=newn(10);
y->r->l=newn(2);
y->r->l->r=newn(14);
if(checkmirror(x,y))
cout<<"YES";
else
cout<<"NO";
}
