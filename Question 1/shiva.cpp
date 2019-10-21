#include <bits/stdc++.h>
using namespace std;
void findnum(int arr[],int n)
{
    priority_queue<int> q;
    for(int i=0;i<n;i++)
        q.push(arr[i]);
    cout<<q.top()<<" ";
    while(q.size()!=1)
        q.pop();
    cout<<q.top()<<endl;
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
