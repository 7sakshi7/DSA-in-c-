#include<iostream>
int n;

#define macre n 10

using namespace std;

int main()
{
	int key, j;
	int a[n];
	cout<<"\n enter the size : ";
	cin>>n;
	cout<<"\n enter the array elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n elements are : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
   for(int i = 1; i<n; i++)
    {
      key = a[i];
      j = i-1;
      
      while(j >= 0 && a[j]>key)
	   {
         a[j+1] = a[j];
         j--;
      }
      a[j+1] = key;   
   }
	
			
	cout<<"\n sorted array are : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
