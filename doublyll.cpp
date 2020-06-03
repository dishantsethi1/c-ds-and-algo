#include<iostream>
using namespace std;
class node
{
public:
  int data;
  node*next;
  node*prev;
};
void push(node**head,int key)
{
  node *new1=new node();
  new1->data=key;
  new1->next=*head;
  new1->prev=NULL;
  if(*head!=NULL) (*head)->prev=new1;
  *head=new1;
}
void append(node**head,int key)
{
  node *temp=new node();
  node*last=*head;
  temp->data=key;
  temp->next=NULL;
  if(*head==NULL)
  {
    temp->prev=NULL;
    *head=temp;
    return;
  }
  while(last->next!=NULL) last=last->next;
  last->next=temp;
  temp->prev=last;
  return;

}
void printlist(node*head)
{
  node*last;
  while(head!=NULL)
  {
    cout<<head->data<<" ";
    last=head;
    head=head->next;
  }
  cout<<endl;
  while(last!=NULL)
  {
    cout<<last->data<<" ";
    last=last->prev;
  }
}
void insertafter(node*pre,int key)
{
  if(pre==NULL ) return;
  node*temp=new node();
  temp->data=key;
  temp->next=pre->next;
  pre->next=temp;
  temp->prev=pre;
  if(temp->next!=NULL)
  {
    temp->next->prev=temp;
  }
}



void deletenode(node**head,node*del)
{
  if(*head==NULL||del==NULL) return;
  if(*head==del)
  {
    *head=del;
  }
  if(del->next!=NULL)
  {
    del->next->prev=del->prev;
  }
  if(del->prev!=NULL)
  {
    del->prev->next=del->next;
  }
  delete del;
  return;
}



void reverse(node**head)
{
  node*temp=NULL;
  node*s=*head;
  while (s!=NULL) {
    temp=s->prev;
    s->prev=s->next;
    s->next=temp;
    s=s->prev;

  }
if(temp!=NULL) *head=temp->prev;
}



void deletenodeposition(node**head,int n)
{
  if(*head==NULL|| n<=0) return;
  node*temp=*head;
  int c;
  for(int i=1;temp!=NULL &&i<n;i++)
  {
    temp=temp->next;
  }
  if(temp==NULL) return;
  deletenode(head,temp);
}




void removeduplicatesfromsorted(node**head)
{
  if(*head==NULL) return ;
  node*temp=*head;
  node*h;
  while(temp->next!=NULL)
  {
    if(temp->data==temp->next->data)
    {
      deletenode(head,temp->next);
    }
    else
    {
      temp=temp->next;
    }
  }
}
int main()
{
  node*head=NULL;
  push(&head,6);
  push(&head,5);
  push(&head,4);
  push(&head,4);

removeduplicatesfromsorted(&head);
  printlist(head);
}
