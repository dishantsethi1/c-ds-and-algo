#include<iostream>
using namespace std;
class node
{
public:
  node *lchild;
  int data;
  node*rchild;
}*root=NULL;


void insert(int x)
{
  node*t=root;
  node*r,*p;
  if(root==NULL)
  {
    p=new node;
    p->data=x;
    p->rchild=p->lchild=NULL;
    root=p;
    return;
  }
  while(t!=NULL)
  {
    r=t;
    if(x<t->data){t=t->lchild;}
    else if(x>t->data) t=t->rchild;
    else return;
  }
  p=new node;
  p->data=x;
  p->rchild=p->lchild=NULL;
  if(x<r->data) r->lchild=p;
  else r->rchild=p;
}





void inorder(node*p)
{
  if(p)
  {
    inorder(p->lchild);
    cout<<p->data<<" ";
    inorder(p->rchild);
  }
}




node*search(int x)
{
  node*t=root;
  while(t!=NULL)
  {
    if(x==t->data) return t;
    else if(x<t->data) t=t->lchild;
    else t=t->rchild;

  }return NULL;
}



int height(node*p)
{int x,y;
  if(p==NULL) return 0;
  else
  {
    x=height(p->lchild);
    y=height(p->rchild);
    return x>y?x+1:y+1;
  }
}




node*inpre(node*p)
{
  while(p&&p->rchild!=NULL)
  p=p->rchild;

  return p;
}




node*insuc(node*p)
{
  while(p&&p->lchild!=NULL)
  p=p->lchild;

  return p;
}





//deleting
node *delete(node* p,int key)
{
node*q;
  if(p==NULL)
  return NULL;
  if(p->lchild==NULL&& p->rchild==NULL)
  {
    if(p==root) root=NULL;
    delete p;
    return NULL;
  }



  if(key<p->data)
  {
    p->lchild=delete(l->child,key);
  }
  else if(key>p->data) r->child=delete(r->child,key);
  else
  {
    if(height(l->child)>height(r->child))
    {
    q=inpre(p->lchild);
    p->data=q->data;
    p->lchild=delete(p->lchild,q->data);
    }
    else
    {
      q=insuc(p->rchild);
      p->data=q->data;
      p->rchild=delete(p->rchild,q->data);
    }
  }
  return  p;
}
int main()
{
  insert(10);
  insert(5);
  insert(20);
  insert(8);
  insert(30);


  delete(root,20);
  inorder(root);
  cout<<endl;
}
