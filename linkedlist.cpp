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
// int printmiddle(node*head){
//   node*slow=head;
//   node*fast=head;
//   if(head!=NULL){
//     while(fast!=NULL&&fast->next!=NULL){
//       fast=fast->next->next;
//       slow=slow->next;
//     }return slow->data;
//   }
// }

// int count(node*head,int key){
//   node*temp=head;
//   int c=0;
//   while(temp!=NULL){
//     if(temp->data==key) {
//       c++;
//     }
//     temp=temp->next;
//   }return c;
// }
// int detectloop(node*head)
// {
//   node*slow=head;
//   node*fast=head;
//   while(slow&&fast&&fast->next)
//   {
//     slow=slow->next;
//     fast=fast->next->next;
//     if(slow==fast){return 1;}
//   }return 0;
// }
// void removeduplicates(node*head){
//   node*temp=head;
//   node*temp2;
//   if(temp==NULL){return;}
//   while(temp->next!=NULL){
//     if(temp->data==temp->next->data){
//       temp2=temp->next->next;
//       delete temp->next;
//       temp->next=temp2;
//
//     }
//     else{
//       temp=temp->next;
//     }
//   }
// }
// void removeduplicates(node*head)
// {
//   node* temp=head;node* temp2;node* dup;
//
//   while(temp!=NULL && temp->next!=NULL)
//   {
//     temp2=temp;
//     while(temp2->next!=NULL)
//     {
//       if(temp->data==temp2->next->data)
//       {
//         dup=temp2->next;
//         temp2->next=temp2->next->next;
//         delete dup;
//       }
//       else
//       {
//         temp2=temp2->next;
//       }
//     }
//     temp=temp->next;
//   }
// }
void printlist(node* n)
{
  while(n!=NULL){
    cout<<n->data;
    n=n->next;
  }
}


int main(){
  node* head=NULL;
  push(&head,5);
  push(&head,8);
  push(&head,7);
  push(&head,5);
  push(&head,5);



  printlist(head);
}
