#include<iostream>

using namespace std;

int main()
{
	int number[10];
	int temp;
	int c=0,n;
	cout<<"\n enter size :";
	cin>>n;
	cout<<"\n enter array elements";
	for(int i=0;i<n;i++)
	{
		cin>>number[i];
	}
	
	for(int i=0;i<n;i++)     //for pass
	{     
	     
		for(int j=0;j<n-1-i;j++)    //for comparison
		{  
			if(number[j]>number[j+1])
			{  
				temp=number[j];
				number[j]=number[j+1];
				number[j+1]=temp;
				c++;
			}
			  	 
		}
		if(c==0)
		     {
		     	cout<<"\n already sorted :";
		     	break;
			 }
	}
	cout<<"\n sorted array :";
	for(int i=0;i<n;i++)
	{
		cout<<number[i]<<" ";
	}
	
	return 0;
}
