#include<iostream>
using namespace std;

class node
{
public:
  node*lchild;
  int data;
  node*rchild;
};


class queue
{
  int front;
  int rear;
  int size;
  node**a;
public:
  queue(){front=rear=-1; a=new node*[size];}
  queue(int size){front=rear=-1;this->size=size; a=new node*[this->size];}
  void enqueue(node*x);
  node* dequeue();
  int isempty(){return front==rear;}
};




void queue::enqueue(node*x)
{
  if(rear==size-1) cout<<"queue full"<<endl;
  else
  {
    rear++;
    a[rear]=x;
  }
}




node*queue::dequeue()
{node*x=NULL;
  if(front==rear) cout<<"cant empty"<<endl;
  else
  {
    front++;
    x=a[front];
  }return x;
}






class tree
{
public:
  node*root;
  tree(){root=NULL;}
  void Treecreate();
  void Preorder(node*p);
};





void tree::Treecreate()
{
  node *p,*t;
  int x;
  queue q(5);

  cout<<"enter root value"<<endl;
  cin>>x;
  root=new node;
  root->data=x;
  root->lchild=root->rchild=NULL;
  q.enqueue(root);

  while(!q.isempty())
  {
    p=q.dequeue();
    cout<<"enter the left child";
    cin>>x;
    if(x!=-1)
    {
      t=new node;
      t->data=x;
      t->lchild=t->rchild=NULL;
      p->lchild=t;
      q.enqueue(t);
    }
    cout<<"enter the right child";
    cin>>x;
    if(x!=-1)
    {
      t=new node;
      t->data=x;
      t->lchild=t->rchild=NULL;
      p->rchild=t;
      q.enqueue(t);
    }

  }
}

void tree::Preorder(node*p)
{
  if(p)
   {

  cout<<p->data<<" ";
   Preorder(p->lchild);
   Preorder(p->rchild);
   }
}

int main()
{
  tree t;
  t.Treecreate();
  t.Preorder(t.root);
}
