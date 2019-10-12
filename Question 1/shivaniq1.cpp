#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int N;
        vector<int> V;
        cin>> N;
        for(int i=0;i<N;i++)
        {
            int x;
            cin>>x;
           V.push_back(x);
        }
        cout<<*max_element(V.begin(), V.end())<<" "<<*min_element(V.begin(), V.end());
    }
}
