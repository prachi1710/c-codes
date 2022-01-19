//two arrays and sum
#include<iostream>
using namespace std;
void smallestsum(int arr1[],int arr2[],int n1,int n2)
{
    int i,j,k;
    for(i=0;i<n1+n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            for(k=0;k<n2;k++)
            {
                cout<<arr1[j]+arr2[k]<<endl;
            }
        }
    }
}
int main()
{
    int n1,n2,i,j;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for(i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    for(j=0;j<n2;j++)
    {
        cin>>arr2[j];
    }
    smallestsum(arr1,arr2,n1,n2);
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            cout<<arr1[i]<<" "<<arr2[j];
        }
    }
}