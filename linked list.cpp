#include<bits/stdc++.h>
#define ll long long
using namespace std;

class node
{
	public:
	int data;
	node* next;
	// basically the constructor for the node:
	node(int d)
	{
		data=d;
		next=NULL;
	}
};
/*
// this is the class apprach but  we will use functinal approach in o
// in our code:

class LinkedList{
public:
	nde* head;
	node* tail;
	
	LinkedList()
	{
		head=NULL;
		tail=NULL;
	}
	void insert()
	{
		
	}
	
};
*/
// passing  a pointer with reference
void insertAtHead(node* &head,int data)
{
	node* n=new node(data);
	n->next=head;
	head=n;
}
void print(node*head)
{
	node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	// nice bitches
}
int length(node*head)
{
	int len=0;
	while(head!=NULL)
	{
		head=head->next;
		len+=1;
	}
	return len;
}
void insertAtTail(node*&head,int data)
{
	if(head==NULL)
	{
		head=new node(data);
		return;
	}
	node*tail=head;
	while(tail->next!=NULL)
	{
		tail=tail->next;
	}
	tail->next=new node(data);
	return;
}
void insertMiddle(node*&head,int data,int p)
{
	if(head==NULL||p==0)
	{
		insertAtHead(head,data);
	}
	else if(p>length(head))
	{
		insertAtTail(head,data);
	}
	else
	{
		int jump=1;
		node*temp=head;
		while(jump<=p-1)
		{
			temp=temp->next;
			jump+=1;
		}
		node*n=new node(data);
		n->next=temp->next;
		temp->next=n;
	}
}
void deleteAtHead(node*&head)
{
	if(head==NULL)
	{
		return;
	}
	node*temp=head;
	head=head->next;
	delete temp;
	return;
}
void deleteAtTail(node*&head)
{
	node*prev=NULL;
	node*temp=head;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	delete temp;
	prev->next=NULL;
	return;
}
bool searchRecursive(node*head,int key){
    if(head==NULL){
        return false;
    }
    //Rec Case 
    if(head->data ==key){
        return true;
    }
    else{
        return searchRecursive(head->next,key);
    }
}
bool searchIterative(node*head,int key){
    
    while(head!=NULL){
        if(head->data==key){
            return true;
        }
        head = head->next;
    }
    return false;
}
void buildList(node*&head){
    
    int data;
    cin>>data;
    
    while(data!=-1){
        insertAtTail(head,data);
        cin>>data;
    }
}

int main()
{
node*head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtTail(head,6);
    
    insertMiddle(head,2,3);
    print(head);
    
    if(searchRecursive(head,4)){
        cout<<"Element is present !"<<endl;
    }
    else{
        cout<<"Not present !";
    }
    if(searchIterative(head,14)){
        cout<<"Element is present !";
    }
    else{
        cout<<"Not present !";
    }
    
    return 0;
}

