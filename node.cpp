#include<iostream>

using namespace std;
class node
{
public:
  int data;
  node* next;
};

void push(node** head,int new_data){
  node* new_node=new node();
  new_node->data=new_data;
  new_node->next=(*head);
  (*head)=new_node;
}
void append(node** head,int new_data)
{
  node* new_node=new node();
  node*last =(*head);
  new_node->data=new_data;
  new_node->next=NULL;
  if(*head ==NULL)
  {
    *head=new_node;
  return ;
}
  while(last->next!=NULL)
  {
    last=last->next;
  }

last->next=new_node;
return ;
}

void insertafter(node* pre_node,int new_data)
{
  if(pre_node==NULL) {return ;}
  node* new_node=new node();
  new_node->data=new_data;
  new_node->next=pre_node->next;
  pre_node->next=new_node;
}


// void deletenode(node** head,int key){
//   node* temp=*head;
//   node* prev=*head;
//   if(temp!=NULL&&temp->data==key){
//     *head=temp->next;
//     delete temp;
//     return;
//   }
//   while(temp!=NULL&&temp->data!=key){
//     prev=temp;
//     temp=temp->next;
//   }if(temp==NULL){return ;}
//   prev->next=temp->next;
//   delete temp;
// }
// void deletenode(node** head,int pos){
//   if(*head==NULL){return ;}
//   node*temp=*head;
//   if(pos==0){
//     *head=temp->next;
//     delete temp;
//     return;
//   }
//   for(int i=0;temp!=NULL&&i<pos-1;i++){
//     temp=temp->next;
//   }
//   if (temp == NULL || temp->next == NULL)
//         return;
//
//         node*next=temp->next->next;
//         delete temp->next;
//         temp->next=next;
// }
// int count(node*head){
//   node*temp=head;
//   int c=0;
//   while(temp!=NULL){
//     c++;
//     temp=temp->next;
//   }return c;
// }
// bool search(node*head,int key){
//   node*temp=head;
//   while(temp!=NULL)
//   {
//     if(temp->data==key) return true;
//     temp=temp->next;
//   }return false;
// }
// int getn(node*head,int pos){
//   node*temp=head;
//   for(int i=0;temp!=NULL&&i<=pos-1;i++) temp=temp->next;
// if(temp==NULL) return 0;
//   return temp->data;
// }
int printmiddle(node*head){
  node*slow=head;
  node*fast=head;
  if(head!=NULL){
    while(fast!=NULL&&fast->next!=NULL){
      fast=fast->next->next;
      slow=slow->next;
    }return slow->data;
  }
}
void printlist(node* n)
{
  while(n!=NULL){
    cout<<n->data;
    n=n->next;
  }
}


int main(){
  node* head=NULL;
  append(&head,4);
  push(&head,6);
  push(&head,7);
  push(&head,9);
  append(&head,5);
  insertafter(head->next,8);
cout<<printmiddle(head);
  printlist(head);
}
