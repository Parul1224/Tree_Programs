#include<bits/stdc++.h>
using namespace std;
struct node
{
int d;
struct node*l;
struct node*r;
};
void printpath(int arr[],int l)
{
for(int i=0;i<l;i++)
cout<<arr[i]<<" ";
cout<<endl;
}
void rotl(struct node*root,int arr[],int len)
{
if(root==NULL)
return;
if(root->l==NULL && root->r==NULL)
{
arr[len]=root->d;
len++;
printpath(arr,len);
}
arr[len]=root->d;
len++;
rotl(root->l,arr,len);
rotl(root->r,arr,len);
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
int arr[100];
rotl(x,arr,0);

//cout<<h;
}
