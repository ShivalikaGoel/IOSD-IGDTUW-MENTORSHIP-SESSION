#include<bits/stdc++.h> 
using namespace std; 
  
void swap(string *x, string *y) 
{ 
   string temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
void sortInWave(string nos[], int n) 
{ 
    sort(nos, nos+n); 

    for (int i=0; i<n-1; i += 2) 
        swap(&nos[i], &nos[i+1]); 
} 
  
int main() 
{ 
    vector<string> nos;
 	string numbers;
 	cout<<"Enter numbers::"<<endl;
 	
 	while(cin>>numbers){
 	    nos.push_back(numbers);
	 }
	  
    int n = sizeof(nos)/sizeof(nos[0]); 
    sortInWave(nos, n); 
    for (int i=0; i<n; i++) 
       cout << nos[i] << " "; 
    return 0; 
}
