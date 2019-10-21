#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
void findsum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
       {
          sum+=arr[i];
       }
    cout<<sum<<endl;
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
        findsum(arr,n);
    }
    return 0;
}
