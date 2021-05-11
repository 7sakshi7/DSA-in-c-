#include<iostream>

using namespace std;

class stack
{
	struct Node
	{
		int data;
		Node *next;
		
	};
	Node *top;
	public:
		stack()
		{
			top=NULL;
		}
	void push();
	void pop();
	void peek();
	void display();
};
void stack::push()
{
	Node*new_node=new Node;
	int n;
	cout<<"\n enter no to be inserted";
	cin>>n;
	new_node->data=n;
	new_node->next=top;
	top=new_node;
	
}
void stack ::pop()
{
	Node*ptr=top;
	if(top==NULL)
	cout<<"\n nothing to pop";
	else
	{
		cout<<"\n element popped is"<<top->data;
		top=top->next;
		delete ptr;
		
	}
}
void stack ::peek()
{
	
	if(top==NULL)
	cout<<"\n nothing to pop";
	else
	{
		cout<<"\nlast no  is"<<top->data;
		
		
	}
}
void stack::display()
{
	Node *nodeptr;
	if(top==NULL)
	cout<<"\n nothing to display";
	else
	{
		nodeptr=top;
		while(nodeptr->next!=NULL)
		{
			cout<<nodeptr->data<<endl;
			nodeptr=nodeptr->next;
		} 
		cout<<nodeptr->next<<endl;
	} 
}
int main()
{
	stack s1;
	char ch;
	char chh;
	do
	{
		cout<<"\n **************options********* \n 1. push \n 2. pop\n 3. peek \n 4. display \n enter ur choice";
		cin>>ch;
		switch(ch)
		{
			case'1':s1.push();
			break;
			case '2':s1.pop();
				break;
			case'3':s1.peek();
				break;
			case'4':s1.display();
				break;
		}
		cout<<"\n want to cnt";
		cin>>chh;
	} while(chh=='y');
	
	
return 0;
	
}
