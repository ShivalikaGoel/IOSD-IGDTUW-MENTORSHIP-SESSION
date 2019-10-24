#include<iostream.h>
#include<conio.h>
int main()
{
int a[],i,n,sum=0;
cout<<"enter number of terms in array";
cin>>n;
cout<<"enter elements in array";
for(i=0;i<n;i++)
{
cin>>a[i];
sum+=a[i];
}
getch();
return 0;
}