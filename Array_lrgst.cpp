#include<iostream>
using namespace std;
main()
{
int A[]={10,70,80,90,22,78,23,22,21,11};
int larg=A[0];
int i=1;
int n=9;
while(i<=n)
{
	if(A[i]>larg)
	larg=A[i];	
	i++;
}
cout<<"\n Largest = "<<larg;
}
