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
        
        int k;
        cin>>k;

        priority_queue<int> p;
        
        for(int i=0;i<n;i++)
        {
            p.push(arr[i]);
            if(p.size()>k)
                p.pop();
        }
        
        cout<<p.top()<<endl;
    }
    return 0;
}

