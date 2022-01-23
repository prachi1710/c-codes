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
    node *head;
    public:
    linkedlist();
    void insertnode(int n);
    void insertsort(int n);
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
void linkedlist::insertsort(int n)
{
    node*new_node=new node(n);
    node*temp=head;
    new_node->data=n;
    node* cur;
    if (temp == NULL || temp->data>= new_node->data) 
    {
        new_node->next = temp;
        temp = new_node;
    }
    else 
    {
        cur = head;
        while (cur->next != NULL && cur->next->data < new_node->data) {
            cur = cur->next;
        }
        new_node->next = cur->next;
        cur->next = new_node;
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
    cout<<endl;
}
int main()
{
    linkedlist l;
    l.insertnode(12);
    l.insertnode(23);
    l.insertnode(27);
    l.insertnode(34);
    l.insertnode(45);
    l.print();
    l.insertsort(30);
    l.print();
}