#include<iostream>
using namespace std;
void pairs(int arr[],int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(i*arr[i]>j*arr[j])
                count++;
        }
    }
    cout<<count;
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
        pairs(arr,n);
    }
    return 0;
}
