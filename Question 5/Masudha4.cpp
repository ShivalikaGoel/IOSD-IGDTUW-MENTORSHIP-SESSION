#include<iostream>
using namespace std;

void printright(int arr[], int n)
{
    int right=arr[n-1];
    cout<<right<<" ";
    for(int i=n-2; i>=0; i--)
    {
        if(right<arr[i])
        {
            right=arr[i];
            cout<<" "<<right;
        }
    }
}

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        printright(arr,n);
    }
}
