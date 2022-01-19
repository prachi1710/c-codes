//segregate 0's,1's and 2's
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
} 
void segregate(int arr[],int n)
{
    int i=0,j=0,k=n-1;
    while(i<j)
    {
        if(arr[i]==0)
        {
            i++;
        }
        else if(arr[j]==1)
        {
            j--;
        }
        else
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int i,j,n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    segregate(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}