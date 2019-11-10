#include<iostream>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int fib[12]={0,1,2,3,5,8,13,21,34,55,89};
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(arr[i]==fib[j])
                    cout<<arr[i]<<" ";
            }
        }
    }
}
