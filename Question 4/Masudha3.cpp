#include<iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void wavearray(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (i + 1 < n && arr[i + 1] > arr[i])
        {
           swap(arr, i, i+1);
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
        wavearray(arr, n);
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
