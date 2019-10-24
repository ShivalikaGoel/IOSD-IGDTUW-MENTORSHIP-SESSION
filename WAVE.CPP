#include<iostream.h>
#include<conio.h>
int main()
{
int a[100],i,j,tmp;int n;
cout<<"\n enter the sizeof array";
cin>>n;
cout<<"enter lements in array";
for(i=0;i<n;i++)
{cin>>a[i];
}
for(j=0;j<n;j+=2)
{tmp=a[j];
a[j]=a[j+1];
a[j+1]=tmp;
}
for(int k=0;k<n;k++)
{cout<<a[k];}
getch();
return 0;
}
