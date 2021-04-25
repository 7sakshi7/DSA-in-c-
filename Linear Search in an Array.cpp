#include<iostream>

using namespace std;

int main()
{
	int a[10];
	int item,loc=0,n;
	cout<<"\n enter size :";
	cin>>n;
	cout<<"\n enter array elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n enter element to be searched";
	cin>>item;
	for(int i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			loc=i;
			cout<<"\n element found at : "<<loc+1;
			
		}
	}
	}
	if(loc==0)
	cout<<"\n no not found";
	
	
	return 0;
}
