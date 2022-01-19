//pythagorean triplet
//triplet sum equal to given sum
#include<iostream>
using namespace std;
void tripletsum(int arr[],int n)
{
    int i,j,k;
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[i]*arr[i]+arr[j]*arr[j]==arr[k]*arr[k])
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
    int n,i;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    tripletsum(arr,n);
    
}