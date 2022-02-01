#include<iostream>
using namespace std;
class circularlinkedlist;
class node
{
    int data;
    node*next;
    public:
    node()
    {
        data=0;
        next=NULL;
    }
    node(int n)
    {
        data=n;
        next=NULL;
    }
    friend circularlinkedlist;
};
class circularlinkedlist
{
    node* head;
    node* tail;
    public:
    circularlinkedlist()
    {
        head=tail=NULL;
    }
    void createlist(int n);
    void addfront(int n);
    void addpos(int n,int v);
    void delfront();
    void delend();
    void delpos(int n);
    void display();
};
void circularlinkedlist::createlist(int n)
{
    node* new_node=new node(n);
    if(head==NULL)
    {
        head=tail=new_node;
    }
    else
    {
        tail->next=new_node;
        tail=new_node;
        tail->next=head;
    }
}
void circularlinkedlist::addfront(int n)
{
    node* new_node=new node(n);
    if(head==NULL)
    {
        head=new_node;
    }
    new_node->next=head;
    head=new_node;
    tail->next=head;
}
void circularlinkedlist::addpos(int n,int v)
{
    node*temp=head;
    node*new_node=new node(v);
    for(int i=1;i<n-1;i++)
    {
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}
void circularlinkedlist::delfront()
{
    if(head==NULL)
    {
        return;
    }
    node*temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    tail=head;
    head=head->next;
    temp->next=head;
    delete tail;
}
void circularlinkedlist::delend()
{
    node*temp=head;
    while(temp->next!=head)
    {
        tail=temp;
        temp=temp->next;
    }
    tail->next=head;
    delete temp;
}
void circularlinkedlist::delpos(int n)
{
    node*temp=head;
    for(int i=1;i<n;i++)
    {
        tail=temp;
        temp=temp->next;
    }
    tail->next=temp->next;
    delete temp;
}
void circularlinkedlist::display()
{
    node*temp;
    temp=head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    while(temp!=head);
    cout<<endl;
}
int main()
{
    circularlinkedlist a;
    a.createlist(5);
    a.createlist(4);
    a.createlist(16);
    a.createlist(19);
    a.display();
    a.addfront(45);
    a.display();
    a.addpos(2,60);
    a.display();
    a.addpos(4,55);
    a.display();
    a.delfront();
    a.display();
    a.delend();
    a.display();
    a.delpos(3);
    a.display();
}