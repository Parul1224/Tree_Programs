#include<bits/stdc++.h>
using namespace std;
struct node
{
int d;
struct node*l;
struct node*r;
};
void leafnodes(struct node*root,int *c)
{
if(root==NULL)
return;
else if(root->l==NULL&&root->r==NULL)
*c=*c+1;
else
{
leafnodes(root->l,c);
leafnodes(root->r,c);
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
leafnodes(x,&c);
cout<<c<<endl;
}
