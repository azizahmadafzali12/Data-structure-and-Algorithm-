#include<iostream>
using namespace std;
main()
{
int A[]={10,70,80,90,22,78,23,16,21,11};
int smlst=A[0];
int i=1;
int n=9;
while(i<=n)
{
	if(A[i]<smlst)
	smlst=A[i];	
	i++;
}
cout<<"\n Smallest = "<<smlst;
}
