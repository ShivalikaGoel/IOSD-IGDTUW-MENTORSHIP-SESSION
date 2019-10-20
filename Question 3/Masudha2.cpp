#include<iostream>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n,count;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
           count=0;
           for(int j=0; j<n; j++)
           {
               if(arr[i]==arr[j])
                    count++;
           }
           if(count>n/2)
            cout<<arr[i]<<endl;
        }
    }
}
