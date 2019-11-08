#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n], sum=0;
        for(int i=0; i<n; i++)
            cin>>a[i];
        map<int,int> m;
        int max=-1;
        for(int i=0; i<n; i++) {
            if(m[a[i]]) {
                m[a[i]]++;
                if(m[a[i]]>=(n/2+1))
                    max=a[i];
            }
            else
                m[a[i]]=1;
        }
        cout<<max<<"\n";
    }
	return 0;
}
