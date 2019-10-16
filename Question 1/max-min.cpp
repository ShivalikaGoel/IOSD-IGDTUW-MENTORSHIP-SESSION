#include<iostream>
using namespace std;
int main()
{
	int k;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		int n;cin>>n;
		int arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		int maxnum = arr[0];
		int minnum = arr[0];
		for(int i=0;i<n;i++)
		{
			if(maxnum<arr[i])
			{
				maxnum = arr[i];
			}
			if(minnum>arr[i])
			{
				minnum = arr[i];
			}
		}
		cout<<maxnum<<" "<<minnum;
	}
}
