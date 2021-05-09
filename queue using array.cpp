#include<iostream>

using namespace std;

int q[5];
int front=-1;
int rear=-1;

void enqueue(int n)
{
	if(rear==4)
	{
	     cout<<"\n overflow";	 	
	}
	else if(front == -1 && rear== -1)
	{
		front = rear = 0;
		q[rear]=n;
	}
	
	else
	{
		rear++;
		q[rear]=n;
	}
}

void dequeue()
{
	if(front == -1 && rear== -1)
	cout<<"\n Nothing to delete ....Its empty";
	else if(front == rear)
	{
		front = rear=-1;
	}
	else
	{
		cout<<"\n delted item is "<<q[front];
		front++;
	}
}

void peek()                  //front()
{
	if(front == -1 && rear== -1)
	cout<<"\n Nothing to delete ....Its empty";
	else
	{
		cout<<"\n item which will be deleted is "<<q[front];
		
	}
}

void display()
{
	if(front == -1 && rear== -1)
	cout<<"\n Nothing to delete ....Its empty";
	else
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<q[i]<<endl;
		}
	}
}
int main()
{
	int n;
	char ch;
	char chh;
	do
	{
		cout<<"\n OPTIONS \n 1. insert \n 2. delete \n 3. see \n 4. display";
		cout<<"\n enter ur options : ";
		cin>>ch;
		switch(ch)
		{
			case '1': cout<<"\n enter element to enqueue";
			cin>>n;
			enqueue(n);
			break;
			case '2': dequeue();
			break;
			case '3': peek();
			break;
			case '4': display();
			break;
			default : cout<<"\n wrong choice";
			break;
		}
		cout<<"\n want to cnt";
		cin>>chh;
	} while(chh=='y');
	return 0;
}
