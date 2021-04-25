#include<iostream>

using namespace std;

int main()
{
	int a[10];
	int min,loc,temp,n;
	cout<<"\n enter size :";
	cin>>n;
	
	cout<<"\n enter array elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n elements are : ";
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	//sorting
	for(int i=0;i<n-1;i++)
	{
		min=i;             
		
		for(int j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
				
			}
		}
		
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;	
		}	
	}
	
	cout<<"\n updated array elements : ";
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
