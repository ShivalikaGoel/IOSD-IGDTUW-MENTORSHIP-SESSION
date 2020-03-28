#include<iostream>
using namespace std;
void num(int arr[], int n,int k)
{
    int flag;
    for(int i=0; i<(n-k+1); i++)
    {
        flag=0;
        for(int j=0; j<k; j++)
        {
            if(arr[i+j]<0)
            {
                cout<<arr[i+j]<<" ";
                flag=1;
            }
        }
    if(flag==0)
        cout<<"0"<<" ";
    }
}
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        num(arr, n, k);
    }
}
