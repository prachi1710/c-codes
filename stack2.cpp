#include<iostream>
using namespace std;
class stack;
class node
{
    int data;
    node*next;
    public:
    node();
    node(int val);
    friend stack;
};
class stack
{
    node*head;
    public:
    stack();
    void push(int n);
    void pop();
    void peek();
};
node::node()
{
    data=0;
    next=NULL;
}
node::node(int val)
{
    data=val;
    next=NULL;
}
stack::stack()
{
    head=NULL;
}
void stack::push(int n)
{
    node* newnode=new node(n);
    newnode->next=head;
    head=newnode;
}
void stack::pop()
{
    node* temp = head;
    head = head->next;
    delete temp;
}
void stack::peek()
{
    cout<<head->data<<endl;
}
int main()
{
    stack a;
    a.push(45);
    a.push(30);
    a.peek();
    a.push(90);
    a.peek();
    a.pop();
    a.peek();
}