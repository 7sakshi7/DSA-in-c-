#include<iostream>

using namespace std;

int main()
{
	int n;
	int a[10];
	cout<<"\n enter size";
	cin>>n;
	int item,beg=0,end=n-1,mid,loc=0;
	cout<<"\n enter array elements :";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n array elements : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n enter element to be searched : ";
	cin>>item;
	mid=(beg+end)/2;
	while((beg<=end)&&(a[mid]!=item))
	{
		if(a[mid]<item)
		beg=mid+1;
		else
		end=mid-1;
		mid=(beg+end)/2;
		
	}
	if(a[mid]==item)
	{
		loc=mid;
		cout<<"\n number found at : "<<loc;
	}
		
	else if(loc==0)
	cout<<"\n not found";
	
	return 0;
	
}
