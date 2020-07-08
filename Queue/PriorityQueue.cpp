#include<iostream>
using namespace std;

class Queue
{
public:
  int front;
  int rear;
  int size;
  int *arr;
  Queue()
  {
    front = rear =-1;
  }
  void enqueue(int x)
  {
    if(Front == Size-1)
        cout<<"Queue is full ";
    else
    {
        Rear++;
        q[Rear] = x;
    }
  }

  int dequeue()
  {
    int x=-1;
    if(Front == Rear || Front>Rear)
        cout<<"Queue is empty ";
    else
    {
        Front++;
        x = q[Front];
    }
    cout<<"Deleted element is "<<x;
  }

  void display()
  {
    cout<<"Elements are ";
    for(int i=0;i<=Rear;i++)
        cout<<q[i]<<" ";
  }

  void insert(int arr[], int x, int p)
  {
    arr[p] = x;
  }
};

int main()
{
  int *a;
  Queue q1;
  cout<<"Enter Size of queue ";
  cin>>q1.size;
  q1.arr =  new int[q1.size];
  a = new int[q1.size];
  switch(ch)
  {
    int ch;
    cout<<"\n1.Insert\n2.Delete\n3.Display\n";
    char c;
    do{
    cout<<"Enter your choice ";
    cin>>ch;
    case 1:
      {
          int x;
          cout<<"Enter element to insert ";
          cin>>x;
          q1.enqueue(x);
          break;
      }
    case 2:
      {
          q1.dequeue();
          break;
      }

  return 0;
}
