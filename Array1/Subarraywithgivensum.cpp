#include <iostream>
using namespace std;

void subarray(int *arr,int n,int sum)
{
    int s = 0,j=0;
    int check = 0;
    for(int i=0;i<n;i++)
    {
        if(s+arr[i]<=sum)
            s+=arr[i];
        else
        {
            s+=arr[i];
            while(s>sum){
                s-=arr[j];
                j++;
            }
        }
        if(s == sum){
            cout<<j+1<<" "<<i+1;
            check = 1;
            break;
        }
    }
    if(check == 0)
        cout<<-1;
}

int main(){
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int size,sum;
	    cin>>size>>sum;
	    int *arr;
	    arr = new int[size];
	    for(int i=0;i<size;i++)
	        cin>>arr[i];
	    subarray(arr,size,sum);
	    cout<<endl;
	 }
	return 0;
}
