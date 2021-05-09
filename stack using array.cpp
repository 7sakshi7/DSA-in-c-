#include<iostream>

using namespace std;
int top=-1;

class stack
{
	
	int s[5];
	
	public:
	void push();
	void pop();
	void peek();
	void display();
	 
};
void stack::push()
{
	int n;
	
	cout<<"\n enter no to be inserted";
	cin>>n;
	if(top==4)
	cout<<"\n Overflow....Number can't be inserted";
	else
	{
		top++;
	    s[top]=n;
	}
}

void stack ::pop()
{
	int item;
	if(top==-1)
	cout<<"\n underflow....No number can be pop";
	else
	{
	    	item=s[top];
	    	cout<<"\n the item popped is"<<item;
	    	top--;
	}
}
void stack ::peek()
{
	int item;
	if(top==-1)
	cout<<"\n underflow....No number can be pop";
	else
	{
	    	item=s[top];
	    	cout<<"\n the item popped is"<<item;
	    
	}
}
void stack ::display()
{
	if(top==-1)
	cout<<"\n underflow";
	else
	{
		for(int i=top;i>=0;i--)
		cout<<s[i]<<endl;
	}
	
	
}
int main()
{
	stack s;
	char ch;
	char chh;
	do
	{
		cout<<"\n options \n 1. push \n 2. pop\n 3. peek \n 4. display \n enter ur choice";
		cin>>ch;
		switch(ch)
		{
			case'1':s.push();
			break;
			case '2':s.pop();
				break;
			case'3':s.peek();
				break;
			case'4':s.display();
				break;
		}
		cout<<"\n want to cnt";
		cin>>chh;
	} while(chh=='y');
	
	
return 0;
	
}
