#include<bits/stdc++.h>
using namespace std;
struct node
{
int d;
struct node*l;
struct node*r;
};
map<int,int>m;
void levelorder(struct node*root)
{
queue<struct node*>q;
q.push(root);
while(q.size()>0)
{
struct node*dt=q.front();
cout<<dt->d<<" ";
q.pop();
if(dt->l)
q.push(dt->l);
if(dt->r)
q.push(dt->r);
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
levelorder(x);

}
