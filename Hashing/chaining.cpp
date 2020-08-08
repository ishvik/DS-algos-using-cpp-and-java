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

Node* search(Node *p,int key)
{
  while(p!=NULL)
  {
    if(key == p->data)
      return p;
    p=p->next;
  }
  return NULL;
}

int main()
{
  return 0;
}
