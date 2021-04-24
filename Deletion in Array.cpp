#include<iostream>
using namespace std;

int main()
{
	int n;
	int a[n];
	int k,item;
	cout<<"\n enter size : ";
	cin>>n;
	cout<<"\n enter array elements :";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n entered array elements are ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	//deleting elements at specific position
	
	cout<<"\n enter position at which you want to delete : ";
	cin>>k;
	
	item=a[k-1];
	cout<<"\n deleted element : "<<item<<endl;
	
	for(int i=k-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	cout<<"\n elements left : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}

