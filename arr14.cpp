#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
} 
void sort(int arr[], int n) 
{ 
    int i,j,min,min2;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[min])
            {
                min=j;
                
            }
            swap(arr[j],arr[min]);
        }
    }
} 
int main()
{
    int i,j,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<i<<" ";
    }
}