#include<iostream.h>
#include<conio.h>
int main()
{
int a[]={1,3,4,4,4,4,4,5,5,5,6};
int i,j,max=0,index=-1;  int count;  int n=sizeof(a)/sizeof(a[0]);
for(i=0;i<n;i++)
{count=0;
for(j=0;j<n;j++)
{if(a[i]==a[j])
count++;
}

if(count>max)
{max=count;
index=i;}   }
if(max>=n/2)
cout<<a[index]<<endl;
else
cout<<"no";
   getch();
return 0;
}