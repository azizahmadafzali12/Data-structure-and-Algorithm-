#include<iostream>
#include<conio.h>

using namespace std;
int q[5];
int f=-1,r=-1,n=4;
int item;
char choice='i';
void cq_delete()
{
	if(f==-1&&r==-1)
	cout<<"\n<<<underflow>>>";
	else
	{ 
	   item=q[f];
	   if(f==r)
	   f=r=-1;
	   else if(f==n)
	   f=0;
	   else
	   f=f+1;
cout<<"\n{ the value is deleted = ";
cout<<item<<"}";
cout<<"\n Front = "<<f;
cout<<"Rare = "<<r;
	}
}
void cq_insert()
{
   if((f==0&&r==n)||(r==f-1))
   cout<<"\n<<<overflow>>>";
   else
   {
   	cout<<"\n Enter value =";
   	cin>>item;
   	if(f==-1&&r==-1)
   	f=r=0;
   	else if(r==n)
   	r=0;
   	else
   	r=r+1;
   	if(f==-1)
   	f=0;
   	q[r]=item;
cout<<"\n{ the value inserted is =";
cout<<item<<"}";
cout<<"\n Front = "<<f;
cout<<"Rare = "<<r;
   }
}
main()
{
	do
	{
		if(choice=='i')
		cq_insert();
		if(choice=='d')
		cq_delete();
		cout<<"\n choice ? ";
 cout<<"i=insert d=delete any other=stop\n";
      choice=getche();
	}
	while(choice=='i'||choice=='d');
}
