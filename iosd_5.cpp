#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
		}
		int max=a[n-1];
		vector<int> v;
		for(int i=n-1; i>=0; i--) {
		    if(i==(n-1)) {
		        v.push_back(a[i]);
		    } else {
    		    if(max<=a[i]) {
    		        max=a[i];
    		        v.push_back(a[i]);
    		    }
		    }
		}
		for(int i=v.size()-1; i>=0; i--)
		    cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}
