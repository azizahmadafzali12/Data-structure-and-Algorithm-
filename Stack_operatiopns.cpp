#include<iostream>
using namespace std;
int stk[5];
int n=4;
int element;
int top=-1;
void push()
{
if(top==n)
cout<<"\nOverflow";
else
{
cout<<"\nEnter the element = "; 
cin>>element;
top++;
stk[top]=element;
	}	
}
void POP()
{
	if(top==-1)
	cout<<"\n Underflow";
	else
	{
			element=stk[top];
			top--;
			cout<<"\n poped element ="<<element;
	}
}
void traverse()
{
	int i;
	if(top==-1)
	cout<<"\n Underflow\n";
	else
	{
		for(i=0;i<=top;i++)
		cout<<stk[i]<<" ";
	}
}
main()
{
int option;
do
{
cout<<"\n Choose:";
cout<<"\n0 ---Exit()\n1 ---Push()\n2 ---POP()\n3 ---Traverse()\n";
cin>>option;
if(option==1)
push();
else if(option==2)
POP();
else if(option==3)
traverse();
else if(option==0)
return 0;
else
cout<<"Invalid option";
}
while(option!=0);
}
