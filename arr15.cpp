//palindrome
#include<iostream>
using namespace std;
int palindrome(int arr[],int n)
{
    int i,j,count;
    i=0;
    j=n-1;
    count=0;
    while(i<=j)
    {
        // count=0;
        if(arr[i]==arr[j])
        {
            i++;
            j--;
        }
        else if(arr[i]>arr[j])
        {
            arr[j-1]=arr[j-1]+arr[j];
            j--;
            count++;
        }
        else if(arr[i]<arr[j])
        {
            arr[i+1]=arr[i+1]+arr[i];
            i++;
            count++;
        }
    }
    return count;
}
int main()
{
    int i,j,n,k;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<palindrome(arr,n);
}