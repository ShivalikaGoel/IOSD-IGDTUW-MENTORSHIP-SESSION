#include <bits/stdc++.h>
using namespace std;
void findseries(int arr[],int n)
{
    vector <int> v;
    if(arr[0]>arr[1])
        v.push_back(arr[0]);
    for(int i=1;i<n-1;)
    {
        if(arr[i]>=arr[i-1] && arr[i]>arr[i+1])
          {
             v.push_back(arr[i]);
             i=i+2;
          }
          else
            i++;
    }
    v.push_back(arr[n-1]);
   for(auto it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
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
