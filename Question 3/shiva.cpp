#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
void findnum(int arr[],int n)
{
    unordered_map <int,int> cnt;
    set<int> s;
    for(int i=0;i<n;i++)
       {
           if(s.find(arr[i])==s.end())
           {
               s.insert(arr[i]);
               cnt[arr[i]]=1;
           }
           else
            cnt[arr[i]]++;
       }
    int max=INT_MIN;
    int num=-1;
    for(auto it=cnt.begin();it!=cnt.end();it++)
        {
            if(max<it->second)
            {
                max=it->second;
                num=it->first;
            }
        }
    if(max<=1)
        cout<<-1<<endl;
    else
    cout<<num<<endl;
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
        findnum(arr,n);
    }
    return 0;
}
