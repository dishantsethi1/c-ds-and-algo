#include<iostream>
using namespace std;
class queue
{
public:
  int front;
  int rear;
  int size;
  int *a;
};
void create(queue *q,int size)
{
  q->size=size;
  q->front=q->rear=-1;
  q->a=new int[q->size];
}
void enqueue(queue *q,int x)
{
  if(q->rear==q->size-1) cout<<"full";
  else
  {
    q->rear++;
    q->a[q->rear]=x;
  }
}
void dequeue(queue *q)
{
  int x=-1;
  if(q->front==q->rear) cout<<"empty"<<endl;
  else
  {
  q->front++;
  x=q->a[q->front];
  }
  cout<<x<<endl;
}
void display(queue q)
{int i;
  for(i=q.front+1;i<=q.rear;i++)
  {
    cout<<q.a[i]<<" ";
  }cout<<endl;
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



int main()
{
  queue q;
  create(&q,5);
  enqueue(&q,3);
  enqueue(&q,6);
  enqueue(&q,9);
  enqueue(&q,12);
  dequeue(&q);
  display(q);
}
