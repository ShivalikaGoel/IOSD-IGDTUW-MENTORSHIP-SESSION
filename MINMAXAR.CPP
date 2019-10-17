#include<iostream.h>
#include<conio.h>
int main(){
int a[50];int n;
cout<<"enter your number of elements";
cin>>n;
cout<<"enter your elements in array";
for(int i=0;i<n;i++)
{cin>>a[i];
}
int k=a[0]; int max=a[0];
for(int j=0;j<n;j++)
{
if(a[j]<k)
k=a[j];}
for(int o=0;o<n;o++)
{if(a[o]>max)
max=a[o];}
cout<<"\n min element"<<k;
cout<<"\n max elemt"<<max;  getch();
return 0;}
