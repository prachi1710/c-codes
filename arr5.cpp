//waveform array
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}    
void check(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i+=2)
    {
        if(arr[i]<arr[i-1])
        {
            swap(arr[i],arr[i-1]);
        }
    }
    for(i=0;i<n;i+=2)
    {
        if(arr[i]<arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
    int n,i;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    check(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}