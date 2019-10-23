#include<iostream>
using namespace std;
void transition(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0 && arr[i+1]==1)
        {
            cout<<i+1;
            break;
        }
    }
}
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        transition(arr,n);

    }
}
