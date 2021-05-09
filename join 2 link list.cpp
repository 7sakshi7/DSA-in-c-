#include<iostream>

using namespace std;

class join
{
	struct Node
	{
		int info;
		Node*link;
		int info1;
		Node*link1;
	};
	Node*start=NULL;
	Node*start1=NULL;
	public:
		void insert_first(int n);
		void insert_second(int n);
		void join_list();
		void display_first();
		void display_second();
		void display_list();
};
void join ::insert_first(int n)
{
	Node*new_Node=new Node;
	new_Node->info=n;
	new_Node->link=NULL;
	if(start==NULL)
	start=new_Node;
	else
	{
		Node*ptr=start;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=new_Node;
	}
	
}
void join ::insert_second(int n)
{
	Node*new_Node=new Node;
	new_Node->info1=n;
	new_Node->link1=NULL;
	if(start1==NULL)
	start1=new_Node;
	else
	{
		Node*ptr=start1;
		while(ptr->link1!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link1=new_Node;
	}
	
}
void join::join_list()
{
	Node*ptr=start;
	while(ptr->link!=NULL)
	{
		cout<<ptr->info<<endl;
		ptr=ptr->link;
	}
	ptr->link=start1;
	cout<<"\n joined ";
	cout<<ptr->info<<endl;
	while(ptr->link1!=NULL)
	{
		cout<<ptr->info<<endl;
		ptr=ptr->link1;
	}
}
void join::display_first()
{
	if(start == NULL)
	cout<<"\n LINKLIST IS NOT CREATED YET \n NO DATA TO DISPLAY";
	else
	{
		Node *nodeptr=start;
		while(nodeptr !=NULL)
		{
			cout<<nodeptr -> info<<endl;
			nodeptr=nodeptr -> link;
		}
	}
}
void join::display_second()
{
	if(start1 == NULL)
	cout<<"\n LINKLIST IS NOT CREATED YET \n NO DATA TO DISPLAY";
	else
	{
		Node *nodeptr=start1;
		while(nodeptr !=NULL)
		{
			cout<<nodeptr -> info1<<endl;
			nodeptr=nodeptr -> link1;
		}
	}
}
int main()
{
	join c;
	char ch,chh;
	int n;
	do
	{
		cout<<"\n options \n 1. insert first\n 2. insert second\n 3. join\n 4. display first\n 5. display second \n enter choice ";
		cin>>ch;
		switch(ch)
		{
			case '1': cout<<"\n enter element ";
			cin>>n;
			c.insert_first(n);
			break;
			case '2': cout<<"\n enter element ";
			cin>>n;
			c.insert_second(n);
			break;
			case '3': c.join_list();
			break;
			case '4': c.display_first();
			break;
			case '5': c.display_second();
			break;
			default:cout<<"\n wrong choice";
			break;
		}
		cout<<"\n wnt to cnt";
		cin>>chh;
	} while(chh=='y');
	return 0;
}
