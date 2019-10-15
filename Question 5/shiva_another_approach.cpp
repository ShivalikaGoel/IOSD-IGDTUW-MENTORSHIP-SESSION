#include <bits/stdc++.h>
using namespace std;
void findseries(int arr[],int n)
{
   int s[n];
   int p=0;
   int maxel=arr[n-1];
   s[p++]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=maxel)
          {
            maxel=arr[i];
            s[p++]=arr[i];
          }
    }
    for(int i=p-1;i>=0;i--)
    {
        cout<<s[i]<<" ";
    }
   cout<<endl;
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
        findseries(arr,n);
    }
    return 0;
}
