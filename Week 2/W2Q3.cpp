#include<bits/stdc++.h>
using namespace std;
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
        int diff;
        cin>>diff;
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
                if(arr[j]-arr[i]==diff || arr[i]-arr[j]==diff)
                    count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
