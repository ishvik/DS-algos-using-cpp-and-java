#include<iostream>
using namespace std;

struct Array
{
    int A[20];
    int Size;
    int length;
};
void display(struct Array arr)
{
    int i;
    cout<<"All Elements are\n";
    for(i=0;i<=arr.length;i++)
        cout<<arr.A[i]<<" ";
}
void append(struct Array *arr, int value)
{
    if(arr->length<arr->Size)
        arr->A[arr->length++]=value;
}
void Insert(struct Array *arr)
{
    int i,position, value;
    cout<<"Enter the element You want to insert = ";
    cin>>value;
    cout<<"Enter the index where you want to insert = ";
    cin>>position;
    if(position>=0 && position<=arr->length)
    {
        for(i=arr->length;i>position;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[position]=value;
        arr->length++;
    }
}
int main()
{
    struct Array arr={{10,20,30,40,50},20,10};

    //append(&arr,12);
    Insert(&arr);
    display(arr);



    return 0;
}










