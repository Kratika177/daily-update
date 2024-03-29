#include <iostream>
using namespace std;
//Circular Linked List
class circularNode
{
	public:
	int info;
	circularNode *next;
	
	circularNode()
	{
		next=0;
	}
	circularNode(int x,circularNode *n=0)
	{
		info=x;
		next=n;
	}
	
};
class circularLinkList
{

	circularNode *tail;
    public:	
    circularLinkList()
    {
    	tail=0;
	}
	~circularLinkList();
	int isempty();
	void addToTail(int);
	void addToHead(int);
	int deleteFromHead(); 
	int deleteFromTail();
	void deleteNode(int);
	bool isInList(int);
	void display();	
	int length();
}; 
circularLinkList::~circularLinkList()
{
	circularNode *temp= tail->next;
	while(temp!=0)
	{		
	    temp=temp->next;
		delete tail->next;
		tail->next=temp;
		
	}
	
}
int circularLinkList::length()
{
	int count=0;
	circularNode *temp=tail->next;
	while(temp!=0)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
int circularLinkList::isempty()
{
	if(tail->next==0)
	{
		return 1; //List is empty
	}
	else
	{
		return 0; //List not empty
	}
}
void circularLinkList::addToHead(int x)
{
   circularNode *p=new circularNode(x);
   if(!isempty())
   {   	
   	p->next=tail->next;
   	tail->next=p;
   }
   else
   {
   	tail=p;
   	tail->next=p;
   }
}
void circularLinkList::addToTail(int x)
{
	circularNode *p=new circularNode(x);
   if(!isempty())
   {
     	
   	p->next=tail->next;
   	tail->next=p;
   	tail=p;
   }
   else
   {
   	tail=p;
   	tail->next=tail;
   }
}
int circularLinkList::deleteFromHead()
{
	int x=tail->next->info;
   if(tail==tail->next)
   {   	
    delete tail->next;
    tail->next=tail=0;
   }
   else
   {
   	circularNode *temp=tail->next;
   	tail->next=tail->next->next;
   	delete temp;
   }
return x;   
}
int circularLinkList::deleteFromTail()
{
	int x=tail->info;
   if(tail==tail->next)
   {   	
    delete tail;
    tail->next=tail=0;
   }
   else
   {
   	circularNode *temp=tail->next;
   	while(temp->next!=tail)
   	{
   		temp=temp->next;
	}
	temp->next=tail->next;
   	delete tail;
   	tail=temp;
   	tail->next=0;
   	
   }
return x;   
}
void circularLinkList::deleteNode(int x)
{
	circularNode *temp=tail->next;
   if(tail->next==tail)
   {
   	delete tail->next;
   	tail->next=tail=0;
   }
   else if(tail->next->info==x)
   {
   	circularNode *temp=tail->next;
   	tail->next=temp->next;
   	delete temp;
   }
   circularNode *prev;
   circularNode *p;
   prev=tail->next;
   p=tail->next->next;
   while(p!=tail && p->info!=x)
   {
   	prev=p;
   	p=p->next;
   }
   if(p!=tail)
   {
   	prev->next=p->next;
   	delete p;
   }
   else if(tail->info==x)
   {
   	delete tail;
   	prev->next=0;
   	tail=prev;
   }
   else
   {
   	 cout<<"element doesnot found";
   }
}
bool circularLinkList::isInList(int x)
{
	circularNode *temp=tail->next;
	int check=0;
	while(temp!=0)
	{
		if(temp->info==x)
		{
			check=1;
		}
		temp=temp->next;
	}		
	if(check==1)
	{
		return true;
	}
	else
	{
		return false;
	}

	
   }   
void circularLinkList::display()
{
	circularNode *temp=tail->next;
	while(temp!=0)
	{
	  cout<<temp->info<<" , ";
	  temp=temp->next;	
	}
		
}

// Double Link List
class doubleNode
{
	public:
	int info;
	doubleNode *next;
	doubleNode *prev;
	
	doubleNode()
	{
		next=0;
		prev=0;
	}
	doubleNode(int x,doubleNode *n=0,doubleNode *p=0)
	{
		info=x;
		next=n;
		prev=p;
	}
};
class doubleLinkList
{

    doubleNode *head;
	doubleNode *tail;
    public:	
    doubleLinkList()
    {
    	head=0;
    	tail=0;
	}
	~doubleLinkList();
	int isempty();
	void addToTail(int);
	void addToHead(int);
	int deleteFromHead(); 
	int deleteFromTail();
	void deleteNode(int);
	bool isInList(int);
	void display();	
	int length();
}; 
int doubleLinkList::length()
{
	int count=0;
	doubleNode *temp=head;
	while(temp!=0)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
int doubleLinkList::isempty()
{
	if(head==0)
	{
		return 1; //List is empty
	}
	else
	{
		return 0; //List not empty
	}
}
void doubleLinkList::addToHead(int x)
{
   doubleNode *p=new doubleNode(x);
   if(!isempty())
   {   	
   	p->next=head;
   	head->prev=p;
   	head=p;
   }
   else
   {
   	head=tail=p;
   }
}
void doubleLinkList::addToTail(int x)
{
   doubleNode *p=new doubleNode(x);
   if(!isempty())
   {   	
   	tail->next=p;
   	p->prev=tail;
   	tail=p;
   }
   else
   {
   	head=tail=p;
   }
}
int doubleLinkList::deleteFromHead()
{
	int x=head->info;
   if(tail==head)
   {   	
    delete head;
    head=tail=0;
   }
   else
   {
   	doubleNode *temp=head;
   	head=head->next;
   	head->prev=0;
   	delete temp;
   }
return x;   
}
int doubleLinkList::deleteFromTail()
{
	int x=tail->info;
   if(tail==head)
   {   	
    delete tail;
    head=tail=0;
   }
   else
   {
   	doubleNode *temp=head;
   	while(temp->next!=tail)
   	{
   		temp=temp->next;
	}
   	delete tail;
    tail=temp;
   	tail->next=0;
   	
   }
return x;   
}
void doubleLinkList::deleteNode(int x)
{
   
   if(head==tail)
   {
   	delete head;
   	head=tail=0;
   }
   else if(head->info==x)
   {
   	doubleNode *temp=head;
   	head=temp->next;
   	head->prev=0;
   	delete temp;
   }
   doubleNode *temp=head;
   while(temp->next!=0)
   {
   	 if(temp->info==x)
   	 {
   	     temp->prev->next=temp->next;
		 temp->next->prev= temp->prev;	 	
	 }
	 temp=temp->next;
   }
   if(tail->info==x)
   {
   	 delete tail;
   	 tail=tail->prev;
   	 tail->next=0;
   	 		 
   }
   else
       cout<<"Element doesnot found"<<endl;
   
}
bool doubleLinkList::isInList(int x)
{
	doubleNode *temp=head;
	int check=0;
	while(temp!=0)
	{
		if(temp->info==x)
		{
			check=1;
		}
		temp=temp->next;
	}		
	if(check==1)
	{
		return true;
	}
	else
	{
		return false;
	}

	
}   
void doubleLinkList::display()
{
	doubleNode *temp=head;
	while(temp!=0)
	{
	  cout<<temp->info<<" , ";
	  temp=temp->next;	
	}
		
}
doubleLinkList::~doubleLinkList()
{
	doubleNode *temp=head;
	while(temp!=0)
	{
	   temp=temp->next;
	   delete head;
	   head=temp;	
	}
	
}


//Single Link List

class singleNode
{
	public:
	int info;
	singleNode *next;
	
	singleNode()
	{
		next=0;
	}
	singleNode(int x,singleNode *n=0)
	{
		info=x;
		next=n;
	}
};

class singleLinkList
{

    singleNode *head;
	singleNode *tail;
    public:	
    singleLinkList()
    {
    	head=0;
    	tail=0;
	}
	~singleLinkList();
	int isempty();
	void addToTail(int);
	void addToHead(int);
	int deleteFromHead(); 
	int deleteFromTail();
	void deleteNode(int);
	bool isInList(int);
	void display();	
	int length();
}; 
int singleLinkList::length()
{
	int count=0;
	singleNode *temp=head;
	while(temp!=0)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
int singleLinkList::isempty()
{
	if(head==0)
	{
		return 1; //List is empty
	}
	else
	{
		return 0; //List not empty
	}
}
void singleLinkList::addToHead(int x)
{
	singleNode *p=new singleNode(x);
   if(!isempty())
   {   	
   	p->next=head;
   	head=p;
   }
   else
   {
   	head=tail=p;
   }
}
void singleLinkList::addToTail(int x)
{
	singleNode *p=new singleNode(x);
   if(!isempty())
   {   	
   	tail->next=p;
   	tail=p;
   }
   else
   {
   	head=tail=p;
   }
}
int singleLinkList::deleteFromHead()
{
	int x=head->info;
   if(tail==head)
   {   	
    delete head;
    head=tail=0;
   }
   else
   {
   	singleNode *temp=head;
   	head=head->next;
   	delete temp;
   }
return x;   
}
int singleLinkList::deleteFromTail()
{
	int x=tail->info;
   if(tail==head)
   {   	
    delete tail;
    head=tail=0;
   }
   else
   {
   	singleNode *temp=head;
   	while(temp->next!=tail)
   	{
   		temp=temp->next;
	}
   	delete tail;
   	tail=temp;
   	tail->next=0;
   	
   }
return x;   
}
void singleLinkList::deleteNode(int x)
{
	singleNode *temp=head;
   if(head==tail)
   {
   	delete head;
   	head=tail=0;
   }
   else if(head->info==x)
   {
   	singleNode *temp=head;
   	head=temp->next;
   	delete temp;
   }
   singleNode *prev;
   singleNode *p;
   prev=head;
   p=head->next;
   while(p!=tail && p->info!=x)
   {
   	prev=p;
   	p=p->next;
   }
   if(p!=tail)
   {
   	prev->next=p->next;
   	delete p;
   }
   else if(tail->info==x)
   {
   	delete tail;
   	prev->next=0;
   	tail=prev;
   }
   else
   {
   	 cout<<"element doesnot found";
   }
}
bool singleLinkList::isInList(int x)
{
	singleNode *temp=head;
	int check=0;
	while(temp!=0)
	{
		if(temp->info==x)
		{
			check=1;
		}
		temp=temp->next;
	}		
	if(check==1)
	{
		return true;
	}
	else
	{
		return false;
	}

	
   }   
void singleLinkList::display()
{
	singleNode *temp=head;
	while(temp!=0)
	{
	  cout<<temp->info<<" , ";
	  temp=temp->next;	
	}
		
}
singleLinkList::~singleLinkList()
{
	singleNode *temp=head;
	while(temp!=0)
	{
	   temp=temp->next;
	   delete head;
	   head=temp;	
	}
	
}
int main()
{
cout<<"Types of linked lists-"<<endl;
cout<<"1- Single Linked List"<<endl;
cout<<"2- Double Linked List"<<endl;
cout<<"3- Circular Linked List"<<endl;

cout<<"Enter the index of link list which you want to perform"<<endl;
int lis;
cin>>lis;
if(lis==1)
{
	singleLinkList s;
		cout<<"Create you list"<<endl;
			cout<<"Enter number of nodes"<<endl;
			int n;
			cin>>n;
			for(int i=0;i<n;i++)
			{
				cout<<"Where you want to add"<<endl;
				cout<<"1- to head"<<endl;
				cout<<"2- to tail"<<endl;
				cout<<"Enter index"<<endl;
				int in;
				cin>>in;
				if(in==1)
                {
    	         cout<<"Enter the element you want to add"<<endl;
    	         int val;
    	         cin>>val;
    	         s.addToHead(val);
    	         cout<<"Element added"<<endl;
	           }
               if(in==2)
               {      
    	         cout<<"Enter the element you want to add"<<endl;
    	         int val;
    	         cin>>val;
    	         s.addToTail(val);
    	         cout<<"Element added"<<endl;
	           }
			}
			    	
	char ch='y'; 
	while(ch=='y')
	{
		    cout<<"___________________________________________________________"<<endl;
	        cout<<"You choose single link list"<<endl;
	        cout<<"Operations-"<<endl;
	        
	        cout<<"1- delete from head"<<endl;
	        cout<<"2- delete from tail"<<endl;
	        cout<<"3- delete a specific node"<<endl;
	        cout<<"4- check wheather the list is empty or not"<<endl;
	        cout<<"5- check wheather a element is in a list or not"<<endl;
	        cout<<"6- find length of list"<<endl;
            cout<<"7- display the list"<<endl;
			
            cout<<"Enter the index of operation you want to perform"<<endl;
            int op;
            cin>>op;
            
           if(op==1)
           {
    	         int del=s.deleteFromHead();
    	         cout<<"Deleted element is= "<<del<<endl;
	       }
           if(op==2)
           {
    	         int del=s.deleteFromTail();
    	         cout<<"Deleted element is= "<<del<<endl;
	       }
           if(op==3)
           {
    	         cout<<"Enter the element you want to delete "<<endl;
    	         int val;
    	         cin>>val;
    	         s.deleteNode(val);
            	 cout<<"Deleted "<<val<<endl;
	       }
	       if(op==4)
           {
    	         int em=s.isempty();
    	         if(em==1)
    	         {
    		         cout<<"Empty List"<<endl;
		         }
		         else
    	             cout<<"List not empty "<<endl;
	       }			
	       if(op==5)
           {
    	         cout<<"Enter the element you want to check "<<endl;
    	         int val;
    	         cin>>val;
    	         bool em=s.isInList(val);
    	         if(em==true)
    	         {
    		         cout<<"Element is present"<<endl;
		         }
		         else
    	             cout<<"Element is not present "<<endl;
	       }
	       if(op==6)
	       {
	             int len=s.length();
	             cout<<"Length of list= "<<len;	
	       }
	       if(op==7) 
	       {
	             s.display();
	   
	       }
	cout<<endl<<"Do you want to perform more operations?"<<endl;
	cin>>ch;	   							
	}

}
else if(lis==2)
{
	doubleLinkList s;
		cout<<"Create you list"<<endl;
			cout<<"Enter number of nodes"<<endl;
			int n;
			cin>>n;
			for(int i=0;i<n;i++)
			{
				cout<<"Where you want to add"<<endl;
				cout<<"1- to head"<<endl;
				cout<<"2- to tail"<<endl;
				cout<<"Enter index"<<endl;
				int in;
				cin>>in;
				if(in==1)
                {
    	         cout<<"Enter the element you want to add"<<endl;
    	         int val;
    	         cin>>val;
    	         s.addToHead(val);
    	         cout<<"Element added"<<endl;
	           }
               if(in==2)
               {      
    	         cout<<"Enter the element you want to add"<<endl;
    	         int val;
    	         cin>>val;
    	         s.addToTail(val);
    	         cout<<"Element added"<<endl;
	           }
			}
			    	
	char ch='y'; 
	while(ch=='y')
	{
		    cout<<"___________________________________________________________"<<endl;
	        cout<<"You choose double link list"<<endl;
	        cout<<"Operations-"<<endl;
	       
	        cout<<"1- delete from head"<<endl;
	        cout<<"2- delete from tail"<<endl;
	        cout<<"3- delete a specific node"<<endl;
	        cout<<"4- check wheather the list is empty or not"<<endl;
	        cout<<"5- check wheather a element is in a list or not"<<endl;
	        cout<<"6- find length of list"<<endl;
            cout<<"7- display the list"<<endl;
			
            cout<<"Enter the index of operation you want to perform"<<endl;
            int op;
            cin>>op;
            
           if(op==1)
           {
    	         int del=s.deleteFromHead();
    	         cout<<"Deleted element is= "<<del<<endl;
	       }
           if(op==2)
           {
    	         int del=s.deleteFromTail();
    	         cout<<"Deleted element is= "<<del<<endl;
	       }
           if(op==3)
           {
    	         cout<<"Enter the element you want to delete "<<endl;
    	         int val;
    	         cin>>val;
    	         s.deleteNode(val);
            	 cout<<"Deleted "<<val<<endl;
	       }
	       if(op==4)
           {
    	         int em=s.isempty();
    	         if(em==1)
    	         {
    		         cout<<"Empty List"<<endl;
		         }
		         else
    	             cout<<"List not empty "<<endl;
	       }			
	       if(op==5)
           {
    	         cout<<"Enter the element you want to check "<<endl;
    	         int val;
    	         cin>>val;
    	         bool em=s.isInList(val);
    	         if(em==true)
    	         {
    		         cout<<"Element is present"<<endl;
		         }
		         else
    	             cout<<"Element is not present "<<endl;
	       }
	       if(op==6)
	       {
	             int len=s.length();
	             cout<<"Length of list= "<<len;	
	       }
	       if(op==7) 
	       {
	             s.display();
	   
	       }
	cout<<endl<<"Do you want to perform more operations?"<<endl;
	cin>>ch;	   							
	}

}
else if(lis==3)
{
	circularLinkList s;
		cout<<"Create you list"<<endl;
			cout<<"Enter number of nodes"<<endl;
			int n;
			cin>>n;
			for(int i=0;i<n;i++)
			{
				cout<<"Where you want to add"<<endl;
				cout<<"1- to head"<<endl;
				cout<<"2- to tail"<<endl;
				cout<<"Enter index"<<endl;
				int in;
				cin>>in;
				if(in==1)
                {
    	         cout<<"Enter the element you want to add"<<endl;
    	         int val;
    	         cin>>val;
    	         s.addToHead(val);
    	         cout<<"Element added"<<endl;
	           }
               if(in==2)
               {      
    	         cout<<"Enter the element you want to add"<<endl;
    	         int val;
    	         cin>>val;
    	         s.addToTail(val);
    	         cout<<"Element added"<<endl;
	           }
			}
			    	
	char ch='y'; 
	while(ch=='y')
	{
		    cout<<"___________________________________________________________"<<endl;
	        cout<<"You choose circular link list"<<endl;
	        cout<<"Operations-"<<endl;
	        
	        cout<<"1- delete from head"<<endl;
	        cout<<"2- delete from tail"<<endl;
	        cout<<"3- delete a specific node"<<endl;
	        cout<<"4- check wheather the list is empty or not"<<endl;
	        cout<<"5- check wheather a element is in a list or not"<<endl;
	        cout<<"6- find length of list"<<endl;
            cout<<"7- display the list"<<endl;
			
            cout<<"Enter the index of operation you want to perform"<<endl;
            int op;
            cin>>op;
            
           if(op==1)
           {
    	         int del=s.deleteFromHead();
    	         cout<<"Deleted element is= "<<del<<endl;
	       }
           if(op==2)
           {
    	         int del=s.deleteFromTail();
    	         cout<<"Deleted element is= "<<del<<endl;
	       }
           if(op==3)
           {
    	         cout<<"Enter the element you want to delete "<<endl;
    	         int val;
    	         cin>>val;
    	         s.deleteNode(val);
            	 cout<<"Deleted "<<val<<endl;
	       }
	       if(op==4)
           {
    	         int em=s.isempty();
    	         if(em==1)
    	         {
    		         cout<<"Empty List"<<endl;
		         }
		         else
    	             cout<<"List not empty "<<endl;
	       }			
	       if(op==5)
           {
    	         cout<<"Enter the element you want to check "<<endl;
    	         int val;
    	         cin>>val;
    	         bool em=s.isInList(val);
    	         if(em==true)
    	         {
    		         cout<<"Element is present"<<endl;
		         }
		         else
    	             cout<<"Element is not present "<<endl;
	       }
	       if(op==6)
	       {
	             int len=s.length();
	             cout<<"Length of list= "<<len;	
	       }
	       if(op==7) 
	       {
	             s.display();
	   
	       }
	cout<<endl<<"Do you want to perform more operations?"<<endl;
	cin>>ch;	   							
	}

}
return 0;	
}
