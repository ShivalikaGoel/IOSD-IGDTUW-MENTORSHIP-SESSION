#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";
          cout<<endl;
}
void swapnum(int *a,int *b)
{
    int n=*a;
    *a=*b;
    *b=n;
}
void findseries(int arr[],int n)
{
    for(int i=1;i<n;i=i+2)
       swapnum(&arr[i-1],&arr[i]);
   printarr(arr,n);
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
