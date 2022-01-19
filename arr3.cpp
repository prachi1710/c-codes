//reserve an array
#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
     int start = 0,end = n-1;
        while(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    // cout<<"The reverse of an array is:"<<endl;
    // for(int i=n-1;i>=0;i--)
    // {
    //     cout<<arr[i]<<" ";
    // }
}
int main()
{
    int n;
    cout<<"enter the number of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}