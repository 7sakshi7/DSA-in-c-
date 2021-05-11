#include<iostream>

using namespace std;

class queue
{
	struct Node
	{
		int data;
		Node *next;
	};
	Node *front,*rear;
	public:
	queue()
	{
		front=NULL;
		rear=NULL;
	 } 
	 void enqueue(int);
	 void dequeue();
	 void peek();
	 void display();
};
void queue :: enqueue(int n)
{
	Node *new_node=new Node;
	new_node->data=n;
	new_node->next=NULL;
	if(front ==NULL && rear==NULL)
	{
		front = rear = new_node;
		
	}
	else
	{
		rear->next=new_node;
		rear=new_node;
		
	}
}
void queue :: dequeue()
{
	if(front ==NULL && rear==NULL)
	cout<<"\n Nothing to delete....Its empty ";
	else
	{
		cout<<"\n deleted no is"<<front->data;
		front=front->next;
	}
}
void queue :: peek()
{
	if(front ==NULL && rear==NULL)
	cout<<"\n Nothind to delete....Its empty ";
	else
	{
		cout<<"\n next  deleted no is"<<front->data;
		
	}
}
void queue :: display()
{
	Node *nodeptr=front;
	if(front ==NULL && rear==NULL)
	cout<<"\n Nothind to delete....Its empty ";
	else
	{
		while(nodeptr!=NULL)
		{
			cout<<nodeptr->data<<endl;
			nodeptr=nodeptr->next;
		}
	}
}
int main()
{
	int n;
	char ch;
	char chh;
	queue q1;
	do
	{
		cout<<"\n OPTIONS \n 1. insert \n 2. delete \n 3. see \n 4. display";
		cout<<"\n enter ur options : ";
		cin>>ch;
		switch(ch)
		{
			case '1': cout<<"\n enter element to enqueue";
			cin>>n;
			q1.enqueue(n);
			break;
			case '2': q1.dequeue();
			break;
			case '3': q1.peek();
			break;
			case '4': q1.display();
			break;
			default : cout<<"\n wrong choice";
			break;
		}
		cout<<"\n want to cnt";
		cin>>chh;
	} while(chh=='y');
	return 0;
}
