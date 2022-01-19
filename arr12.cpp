//frequency of array elements
#include<iostream>
using namespace std;
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 

    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 

        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 

void frequency(int arr[],int mp[],int n)
{
    int i,j,count;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;i<n-1;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                mp[count]=arr[i];
            }
        }
        
    }
    
}
int main()
{
    int i,j,n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int arr[n],mp[n];
    cout<<"Enter the array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    frequency(arr,mp,n);
    selectionSort(mp,n);
    for(j=0;j<n;j++)
    {
        cout<<mp[j]<<" ";
    }

}