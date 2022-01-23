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
    void insertafter(int v, int new_data);
    void insertatmid(int val);
    void delfirst();
    void delend();
    void delkey(int val);
    void reverse(node * temp);
    void printreverse();
    void revelink();
    void search(int key);
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
void linkedlist::insertafter(int v, int new_data)  
{
    node* temp=head;
    node* new_node = new node(new_data);
    new_node->data = new_data; 
    while(temp!=NULL)
    {
        if(temp->data==v)
        {
            new_node->next=temp->next;
            temp->next=new_node;
        }
        temp=temp->next;
    }
} 
void linkedlist::insertatmid(int val)
{
    int count=0;
    node* temp=head;
    node*new_node=new node(val);
    new_node->data=val;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    int i=((count%2==0)?(count/2):(count+1)/2);
    temp=head;
    while(i-- >1)
    {
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
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
    cout<<endl;
}
void linkedlist::delfirst()
{
    if (head == NULL)
        return;
    node* temp = head;
    head = head->next;
    delete temp;
}
void linkedlist::delend()
{
    if(head==NULL)
    {
        return;
    }
    node* temp=head;
    if(temp->next==NULL)
    {
        delete temp;
    }
    node* second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;
    delete (second_last->next);
    second_last->next = NULL;
}
void linkedlist::delkey(int val)
{
    node* temp=head;
    node* prev=NULL;
    if(temp!=NULL && temp->data==val)
    {
        head=temp->next;
        delete temp;
    }
    else
    {
        while (temp != NULL && temp->data != val)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        prev->next = temp->next;
        delete temp;
    }
}
void linkedlist::reverse(node* temp)
{
    if(temp==NULL)
    {
        return;
    }
    reverse(temp->next);
    cout<<temp->data<<" "<<"->";
}
void linkedlist::printreverse()
{
    reverse(head);
    cout<<"NULL"<<endl;
}
void linkedlist::revelink()
{
    node*prev=NULL;
    node*cur=head;
    node*temp=NULL;
    while(cur!=NULL)
    {
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    head=prev;
}
void linkedlist::search(int key)
{
    node*temp=head;
    int flag=0;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            flag=1;
            cout<<"yes element is there"<<endl;
        }
        temp=temp->next;
    }
    if(flag==0)
    {
        cout<<"Element not found"<<endl;
    }
}
int main()
{
    linkedlist l;
    l.insertnode(50);
    l.insertnode(45);
    l.insertnode(21);
    l.print();
    l.insertatbeg(32);
    l.print();
    l.insertafter(45,78);
    l.print();
    l.insertatmid(33);
    l.print();
    l.insertatmid(37);
    l.print();
    l.delfirst();
    l.print();
    l.delend();
    l.print();
    l.delkey(37);
    l.print();
    l.printreverse();
    l.revelink();
    l.print();
    l.search(45);
    l.search(12);
}
