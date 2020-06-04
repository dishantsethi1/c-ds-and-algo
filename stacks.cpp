#include<iostream>
using namespace std;
class stack
{
public:
  int top;
  int size;
  int *a;
};
void create(stack *s)
{

  s->top=-1;
  s->a=new int[5];
}
void display(stack s)
{
  int i;
  for(i=s.top;i>=0;i--)
  {
    cout<<s.a[i]<<" ";
  }cout<<endl;
}
void push(stack *s,int x)
{
  if(s->top==4)
  {
    cout<<"cant";
    return ;

  }
  s->top++;
  s->a[s->top]=x;
}
int pop(stack *s)
{
  int x=-1;
  if(s->top==-1) return -1;
  else
  {
    x=s->a[s->top--];
  }return x;
}
int peek(stack s,int index)
{
  int x=-1;
  if(s.top-index+1<0) cout<<"invalid "<<endl;
  x=s.a[s.top-index+1];
  return x;
}
int isempty(stack s)
{
  if(s.top==-1) return 1;
  return 0;
}
int isfull(stack s)
{
  if(s.top==4) return 1;
  return 0;
}
int stacktop(stack s)
{
  if(!isempty(s)) return s.a[s.top];
  return 0;
}
int main()
{
  stack s;
  create(&s);
  push(&s,1);
  push(&s,2);
  push(&s,3);
  push(&s,4);
  push(&s,5);




  display(s);
}
