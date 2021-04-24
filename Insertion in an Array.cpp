#include<iostream>

using namespace std;
int n=10;  
int size;
int main()
{
	int a[size];
	int k,item;
	cout<<"\n Enter the size you want to enter";
	cin>>size;
	cout<<"\n Enter array elements : ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	//inserting elements at specific position

	if(size==n)
	cout<<"\n overflow";
	else
	{
		
	cout<<"\n Enter position at which you want to insert : ";
	cin>>k;
	cout<<"\n Enter element to be inserted";
	cin>>item;
	for(int i=size-1;i>=k-1;i--)
	{
		a[i+1]=a[i];
	}
	a[k-1]=item;
	size++;
	cout<<"\n Updated array : ";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
	
	return 0;
}

