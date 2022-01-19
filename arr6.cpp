//majority element
#include<iostream>
using namespace std;
void majority(int arr[],int n)
{
    int i,j;
    int index=-1;
    int count=0;
    int c=0;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>c)
        {
            c=count;
            index=i;
        }
    }
    if(c>n/2)
        cout<<arr[index];
    else
    {
        cout<<"No majority element"<<endl;
    }
}
int main()
{
    int n,i;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    majority(arr,n);
}