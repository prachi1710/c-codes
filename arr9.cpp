//triplet sum equal to given sum
#include<iostream>
using namespace std;
void tripletsum(int arr[],int n,int m)
{
    int i,j,k;
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==m)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" ";
                    return;
                }
            }
        }
    }
}
int main()
{
    int n,i,k;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum:"<<endl;
    cin>>k;
    tripletsum(arr,n,k);
    
}