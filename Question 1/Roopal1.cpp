//program to find minimum and maximum element in an array
#include<iostream>
using namespace std;
int main()
{
    int t;
    //t refers to the number of testcases
   	//"Enter the number of testcases"
    cin>>t;
    while(t--)
    {
        int n,max,min;
        cin>>n;
        int arr[n];
        for(int j=0;j<n; j++)
        	cin>>arr[j];
        for(int i=0; i<n; i++)
        {
            max=arr[0];
            if(arr[i]>max)
                max=arr[i];
                // max refers to maximum element of array
            min=arr[0];
            if(arr[i]<min)
                min=arr[i];
                //min refers to minimum element of array
        }
        cout<<max<<" "<<min;
    }
}
