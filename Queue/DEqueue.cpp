#include<iostream>
#include<stdio.h>
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
    front = rear = -1;
  }

  void insert_front(int x)
  {
    if(front == -1)
      cout<<"Element can't be inserted ";
    else
    {
      arr[front] = x;
      front --;
    }
  }

  void insert_rear(int x)
  {
    if((rear+1)%size == front)
      cout<<"Element can't be inserted ";
    else
    {
        rear = (rear+1)%size;
        arr[rear] = x;
    }
  }

  int Delete_front()
  {
    int x = -1;
    if(front == rear)
      return x;
    else
    {
        front = (front+1)%size;
        x = arr[front];
    }
    return x;
  }

  int Delete_rear()
  {
    int x = -1;
    if(rear == -1)
      return x;
    else
      {
        x = arr[rear];
        rear--;
      }
      return x;
  }

  void display()
  {
    int i = front+1;
    cout<<"Elements are ";
    do{
        cout<<arr[i]<<" ";
        i = (i+1)%size;
    }while(i!=(rear+1)%size);
  }
};


int main()
{
  Queue q;
  cout<<"Enter size of queue ";
  cin>>q.size;
  q.arr = new int[q.size];
  int ch;
  char c;
  cout<<"1.Insert using front\n2.Insert using rear\n3.Delete using front\n4.Delete using rear\n5.Display";
  do {
    cout<<"\nEnter your choice ";
    cin>>ch;
    switch (ch) {
      case 1:
      {
        int val;
        cout<<"Enter value ";
        cin>>val;
        q.insert_front(val);
        break;
      }
      case 2:
      {
        int val;
        cout<<"Enter value ";
        cin>>val;
        q.insert_rear(val);
        break;
      }
      case 3:
      {
        cout<<"Deleted value is "<<q.Delete_front();
        break;
      }
      case 4:
      {
        cout<<"Deleted value is "<<q.Delete_rear();
        break;
      }
      case 5:
      {
        q.display();
        break;
      }
      default:
      {
        cout<<"Enter valid choice ";
      }
    }
    cout<<"\nto continue press 'Y' or 'y' = ";
    fflush(stdin);
    cin>>c;
  } while(c == 'y' || c == 'Y');
  return 0;
}
