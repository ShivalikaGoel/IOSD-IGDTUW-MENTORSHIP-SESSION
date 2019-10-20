#include<iostream>
using namespace std;
int main()
{
    int testcases;
   // cout<<"Enter the number of testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n,max,min;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            max=arr[0];
            if(arr[i]>max)
                max=arr[i];
            min=arr[0];
            if(arr[i]<min)
                min=arr[i];
        }
        cout<<max<<" "<<min;
    }
}
