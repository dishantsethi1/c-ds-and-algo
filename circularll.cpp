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





// bool iscircular(node*head)
// {
//   node*temp=head->next;
//   if(head==NULL) return true ;
//   while(temp!=NULL && temp!=head)
//   {
//     temp=temp->next;
//   }
//   return (temp==head);
//
// }







// void deletenode(node**head,int key)
// {
//   if(*head==NULL) return;
//   if((((*head)->data)==key) && (((*head)->next)==*head))
//   {
//     delete *head;
//     *head==NULL;
//   }
//   node*last=*head,*d;
//   if(((*head)->data)==key)
//   {
//     while(last->next!=(*head))
//     {
//       last=last->next;
//     }
//     last->next=((*head)->next);
//     delete *head;
//     *head=last->next;
//   }
//   while(last->next!=(*head) && last->next->data!=key)
//   {
//     last=last->next;
//   }
//   if(last->next->data==key)
//   {
//     d=last->next;
//     last->next=d->next;
//     delete d;
//   }
//   else
//   {
//     cout<<"no such element found";
//   }
// }





// int countnode(node*head)
// {int c=0;
//   node*temp=head;
//   if(head!=NULL)
//   {
//     do {
//     temp=temp->next;
//     c++;
//     } while(temp!=head);
//   }
//   return c;
// }





int main()
{
  node* head=NULL;
  push(&head, 12);
    push(&head, 56);
    push(&head, 5);
    push(&head, 11);



    printlist(head);


      return 0;
}
