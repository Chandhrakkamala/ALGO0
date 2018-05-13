//selection sort
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[15],i,j,n,pos,t,m;
cout<<"Enter the no. of elements:"<<endl;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
m=a[i];pos=i;
for(j=i+1;j<n;j++)
{
if(a[j]<m)
{m=a[j];
pos=j;}
}
t=a[i];
a[i]=a[pos];
a[pos]=t;
}
cout<<"The sorted array is:"<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<" ";
getch();
}
