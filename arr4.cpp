//sum of array pairs
#include<iostream>
using namespace std;
void sum(int arr[],int n,int k)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                cout<<arr[i]<<"+"<<arr[j]<<endl;
            }
        }
    }

}
int main()
{
    int n,i,k;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum:"<<endl;
    cin>>k;
    sum(arr,n,k);
    return 0;
}