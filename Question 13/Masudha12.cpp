#include<iostream>
using namespace std;
# define m 4
void swap(int arr[][m])
{
    for(int i=0; i<m; i++)
        {
            int t = arr[i][0];
            arr[i][0] = arr[i][m-1];
            arr[i][m-1] = t;
        }
}

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n; //n is rows
        cin>>n;
        int arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        swap(arr);
         for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
