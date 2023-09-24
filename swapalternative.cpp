#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i=i+2)
    {
        arr[i]=arr[i]+arr[i+1];
        arr[i+1]=arr[i]-arr[i+1];
        arr[i]=arr[i]-arr[i+1];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}