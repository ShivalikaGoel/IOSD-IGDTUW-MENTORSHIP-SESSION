#include<iostream>
using namespace std;
int main()
{
	int k;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		int n;
		cin>>n;
		int* arr = new int[n];
		int sum = 0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum = sum + arr[i];
		}
		cout<<sum;
		
	}
}
