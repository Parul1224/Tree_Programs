

#include<bits/stdc++.h>
using namespace std;
struct node
{
int d;
struct node*l;
struct node*r;
};






int diameter(struct node*root,int *h)
{
if(root==NULL)
{
*h=0;
return 0;
}
int lr=0;
int rr=0;
int dl=diameter(root->l,&lr);
int dr=diameter(root->r,&rr);
*h=(max(rr,lr))+1;
return(max(lr+rr+1,max(dl,dr)));
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
int h=0;
cout<<diameter(x,&h);
//cout<<h;
}
