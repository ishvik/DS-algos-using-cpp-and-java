#include<iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
};

void sortedInsert(struct Node **H,int val)
{
  Node *n;
  Node *p = *H;
  Node *q = NULL;
  n = new Node();
  n->data = val;
  n->next = NULL;
  if(*H == NULL)
    *H = n;
  else
  {
    while(p && p->data<val)
    {
      q = p;
      p = p->next;
    }
    if(p == *H)
    {
      n->next == *H;
      *H = n;
    }
    else
    {
      n->next = q->next;
      q->next = n;
    }
  }
}

bool search(Node *p,int key)
{
  while(p!=NULL)
  {
    if(key == p->data)
      return true;
    p=p->next;
  }
  return false;
}

int hash1(int key)
{
  return key%10;
}

void insert(Node *H[],int key)
{
  int index;
  index = key%10;
  sortedInsert(&H[index],key);
}

int main()
{
  struct Node *HT[10];
  for(int i=0;i<10;i++)
    HT[i] = NULL;
  for(int i=0;i<10;i++)
  {
    int x;
    cin>>x;
    insert(HT,x);
  }
  cout<<search(HT[hash1(2)],2);
  return 0;
}
