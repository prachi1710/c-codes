//insertion at beginning
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node();
    node(int val);
};
class linkedlist
{
    node* head;
    node* prev;
    public:
    linkedlist();
    void insertnode(int n);
    void insertatbeg(int n);
    void insertafter(int v, int n);
    void print();
};
node::node()
{
    data=0;
    next=NULL;
}
node::node(int val)
{
    this->data=val;
    this->next=NULL;
}
linkedlist::linkedlist()
{
    head=NULL;
}
void linkedlist::insertnode(int n)
{
    node* newnode=new node(n);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void linkedlist::insertatbeg(int n)
{
    node* newnode=new node(n);
    newnode->data=n;
    newnode->next=head;
    head=newnode;
}
void linkedlist::insertafter(int v, int p){
	node *temp = new node(v);
    temp->data=v;

	//temp->data = v;
	if (p == 0){
		// if p==0 then insert temp at beginning
		temp->next = head;
		head = temp;
	}
	else{
		node *ptr = head;
		// the loop sets ptr to (p-1)th node
		while(p>1) {
			ptr = ptr->next;
			--p;
		}
		// ptr now points to (p-1)th node
		// insert temp between (p-1)th and pth node
		temp->next = ptr->next;
		ptr->next = temp;
	}
}

void linkedlist::print()
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main()
{
    linkedlist l;
    l.insertnode(50);
    l.insertnode(45);
    l.insertnode(21);
    l.insertatbeg(32);
    l.insertafter(45,78);
    l.print();
}
