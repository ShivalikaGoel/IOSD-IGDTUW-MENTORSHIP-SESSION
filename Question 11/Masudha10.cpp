#include<iostream>
using namespace std;
void sort(int arr[], int n,int k)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < (n-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<arr[k-1];
}
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n,k,temp;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        sort(arr,n,k);
    }
}
