//rotate an array
#include<iostream>
using namespace std;
void leftrotate(int arr[],int n,int k)
{
    int f,i,j;
    for(i=0;i<k;i++)
    {
        f=arr[0];
        for(j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[j]=f;
    }
}
void rightrotate(int arr[],int n,int k)
{
        int f,i,j;
        for(i=0;i<k;i++)
        {
            f=arr[n-1];
            for(j=n-1;j>=0;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[0]=f;
        }
}
int main()
{
    int n,k;
    char m;
    cout<<"Enter the number of array elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number of rotation:"<<endl;
    cin>>k;
    cout<<"Enter the type of rotation (L or R):"<<endl;
    cin>>m;
    int i,j;
    if(m=='L')
    {
        leftrotate(arr,n,k);
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else if(m=='R')
    {
        rightrotate(arr,n,k);
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}