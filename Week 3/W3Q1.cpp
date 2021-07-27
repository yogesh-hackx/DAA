#include<bits/stdc++.h>
using namespace std;
int insertionSort(int arr[],int n)
{
    int compares=0;
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(arr[j]>key && j>=0)
        {
            compares++;
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }    
    return compares;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
            
        int compares=insertionSort(arr,n);
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl<<"comparisons = "<<compares<<endl;
        cout<<"swaps = "<<compares+n-1<<endl;
    }
    return 0;
}
