#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int Size;
    int length;
};
void display(struct Array Arr)
{
    int i;
    cout<<"All Elements are \n";
    for(i=0;i<Arr.length;i++)
        cout<<Arr.A[i];
}
void Delete(struct Array *Arr)
{
    int position,i;
    cout<<"Enter the position from where you want to delete = ";
    cin>>position;
    if(position>=0 && position<=Arr->length-1)
    {
        for(i=position;i<Arr->length;i++)
            Arr->A[i]=Arr->A[i+1];
    }
    Arr->length--;
}
int main()
{
    struct Array arr={{10,20,30,40,50},20,10};

    Delete(&arr);
    display(arr);
    return 0;
}
