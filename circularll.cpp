#include<iostream>
using namespace std;
class node
{
public:
  int data;
  node*next;
};
void push(node** head,int key)
{
  node* p=new node();
  node*temp=*head;
  p->data=key;
  p->next=*head;
  if(*head!=NULL)
  {
    while(temp->next!=*head)
    {
      temp=temp->next;

    }temp->next=p;
  }
  else
  {
    p->next=p;
  }
  *head=p;
}
void printlist(node*head)
{
  node*temp=head;
  if(head!=NULL)
  {
    do {cout<<temp->data<<" ";
    temp=temp->next;
    } while(temp!=head);
  }

}
// void splitlist(node*head,node**h1,node**h2)
// {
//   node*s=head;
//   node*f=head;
//   while(f->next!=head&&f->next->next!=head)
//   {
//     f=f->next->next;
//     s=s->next;
//   }
//   if(f->next->next==head)
//   {
//     f=f->next;
//   }
//   *h1=head;
//   if(head->next!=head)
//   {
//     *h2=s->next;
//   }
//   f->next=s->next;
//   s->next=head;
// }
bool iscircular(node*head)
{
  node*temp=head->next;
  if(head==NULL) return true ;
  while(temp!=NULL && temp!=head)
  {
    temp=temp->next;
  }
  return (temp==head);

}

int main()
{
  node* head=NULL;
  push(&head, 12);
    push(&head, 56);
    push(&head, 2);
    push(&head, 11);


    printlist(head);
    cout<<iscircular(head);

      return 0;
}
