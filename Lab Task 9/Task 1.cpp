#include<iostream>
using namespace std;
int main()
{
	int size =3;
	int numbers[size];
	cout<<"Enter three integers:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter Number "<<i+1<<": ";
		cin>>numbers[i];
	}
	cout<<"\nNumber in forwed order: "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<"\nNumber in reverse order:"<<endl;
	for(int i=size-1;i>=0;i--)
	{
		cout<<numbers[i]<<" ";		
	}
	cout<<endl;
	return 0;
}
