#include<iostream>
using namespace std;
class Dlinkedlist;
class node
{
    int data;
    node* next;
    node* prev;
    public:
    node()
    {
        data=0;
        next=NULL;
        prev=NULL;
    }
    node(int val)
    {
        data=val;
        this->next=NULL;
        this->prev=NULL;
    }
    friend Dlinkedlist;
};
class Dlinkedlist
{
    node* head, * tail;
    int count=0;
    public:
    void create(int n);
    void display();
};
void Dlinkedlist::create(int n)
{
    node* new_node = new node(n);
    new_node->data = n;
    if (head == NULL)
    {
        head=tail=new_node;
        head->prev=NULL;
        tail->next=NULL;
        count++;
        return;
    }
    tail->next=new_node;
    new_node->prev=tail;
    tail=new_node;
    tail->next=NULL;
    count++;
}
void Dlinkedlist::display()
{
    node*temp=head;
    cout<<"NULL"<<"<->";
    while(temp!=NULL)
    {
        cout<<temp->data<<"<->"<<" ";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
int main()
{
    Dlinkedlist a;
    a.create(6);
    a.create(7);
    a.create(67);
    a.create(32);
    a.create(40);
    a.display();
}