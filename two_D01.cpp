#include<iostream>
using namespace std;
main()
{
int A[3][3];
int i,j;
cout<<"\n Enter 9 integer numbers\n";
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
cin>>A[i][j];

cout<<"\n The Numbers are\n";
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
{
cout<<A[i][j]<<" ";
if(j==2)
cout<<"\n";
}
}
