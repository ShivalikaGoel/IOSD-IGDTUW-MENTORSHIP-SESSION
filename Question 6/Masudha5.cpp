#include<bits/stdc++.h>
using namespace std;
int equi(int arr[],int n)
{
    int left,right;
         for(int i=0; i<n; ++i)
        {
            left=0;
            for(int j=0; j<i; j++)
                left+=arr[j];
            right=0;
            for(int j=i+1; j<n; j++)
                right+=arr[j];
            if(left==right)
                return i;
        }
        return -1;
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
        cout<<equi(arr,n);
    }

}
