#include<iostream>
#include <cmath>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};
Node *head = NULL;

void BinaryToInt(Node *head)
{
  Node *p = head;
  int sum = 0;
  int power = 0;
  while(!p)
  {
    int x;
    x = p->data;
    sum+=x*pow(2,power);
    power++;
    p=p->next;
  }
  cout<<sum;
}

void Insert(Node *head,int value)
{
    Node* NewNode;
    Node* p = head;
    while(p)
    {
      NewNode->data = value;
      NewNode->next = NULL;
    }
}

int main()
{
  //linked l1;
  Node* h;
  int n;
  cout<<"Enter no. of elements ";
  cin>>n;
  cout<<"Enter Elements ";
  for(int i=0;i<n;i++)
  {
    int in;
    cin>>in;
    Insert(head,in);
  }
  BinaryToInt(head);
  return 0;
}
