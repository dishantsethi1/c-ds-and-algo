#include<iostream>
using namespace std;
class queue
{
private:
  int f;
  int r;
  int size;
  int *a;
public:
  queue(){f=r=-1;a=new int[5];}
  queue(int size){f=r=-1;this->size=size;a = new int[this->size];}
  void enqueue(int x);
  int dequeue();
  void display();
};
void queue:: enqueue(int x)
{
  if(r==size-1){ cout<<"full";}
  else
  {
    r++;
    a[r]=x;
  }
}
int queue::dequeue()
{
  int x=-1;
  if(f==r){ cout<<"empty"<<endl;}
  else
  {
  f++;
  x=a[f];
  }
  cout<<x<<endl;
}
void queue::display()
{int i;
  for(i=(f+1);i<=r;i++)
  {
    cout<<a[i]<<" ";
  }cout<<endl;
}

int main()
{
  queue q(5);

  q.enqueue(3);
  q.enqueue(6);
  q.enqueue(9);
  q.enqueue(12);

  q.display();
  return 0;
}


                        //circular queue

// void create(queue *q,int size)
// {
// q->size=size;
// q->front=q->rear=0;
// q->a=new int[q->size];
// }
// void enqueue(queue *q,int x)
// {
//   if((q->rear+1)%q->size==q->size-1) cout<<"full";
//   else
//   {
//     q->rear=(q->rear+1)%q->size;
//     q->a[q->rear]=x;
//   }
// }
// void dequeue(queue *q)
// {
//   int x=-1;
//   if(q->front==q->rear) cout<<"empty"<<endl;
//   else
//   {
//   q->front=(q->front+1)%q->size;
//   x=q->a[q->front];
//   }
//   cout<<x;
// }
// void display(queue q)
// {int i;
//   i=q.front+1;
//   do {
//     cout<<q.a[i]<<" ";
//     i=(i+1)%q.size;
//   } while(i!=(q.rear+1)%q.size);
//    cout<<endl;
// }
