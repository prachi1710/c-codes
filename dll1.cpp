#include <iostream>
using namespace std;
class Dlinkedlist;
class node
{
    int data;
    node *next;
    node *prev;

public:
    node()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }
    node(int val)
    {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
    friend Dlinkedlist;
};
class Dlinkedlist
{
    node *head, *tail;
    int count = 0;

public:
    Dlinkedlist()
    {
        head = NULL;
        tail = NULL;
    }
    void create(int n);
    void addbeg(int n);
    void after(int n, int m);
    void deletefront();
    void delend();
    void delpos(int n);
    void display();
};
void Dlinkedlist::create(int n)
{
    node *new_node = new node(n);
    if (head == NULL)
    {
        head = tail = new_node;
        head->prev = NULL;
        tail->next = NULL;
        count++;
        return;
    }
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
    tail->next = NULL;
    count++;
}
void Dlinkedlist::addbeg(int n)
{
    node *new_node = new node(n);
    new_node->next = head;
    new_node->prev = NULL;
    if (head != NULL)
        head->prev = new_node;
    head = new_node;
}
void Dlinkedlist::after(int n, int m)
{
    node *new_node = new node(m);
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == n)
        {
            new_node->next = temp->next;
            temp->next = new_node;
            new_node->prev = temp;
        }
        temp = temp->next;
    }
}
void Dlinkedlist::deletefront()
{
    if (head == NULL)
        return;
    else
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}
void Dlinkedlist::delend()
{
    if (head != NULL)
    {
        if (head->next == NULL)
        {
            head = NULL;
        }
        else
        {
            node *temp = head;
            while (temp->next->next != NULL)
                temp = temp->next;
            tail = temp->next;
            temp->next = NULL;
            delete tail;
        }
    }
}
void Dlinkedlist::delpos(int n)
{
    node* del;
    node*temp=head;
    while(--n>0)
    {
        temp=temp->next;
    }
    del=temp;
    temp=temp->prev;
    temp->next=del->next;
    del->next->prev=temp;
    del->next=NULL;
    del->prev=NULL;
    delete del;
}
void Dlinkedlist::display()
{
    node *temp = head;
    cout << "NULL"
         << "<->";
    while (temp != NULL)
    {
        cout << temp->data << "<->"
             << " ";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
}
int main()
{
    Dlinkedlist a;
    a.create(6);
    a.create(7);
    a.create(67);
    a.create(32);
    a.create(40);
    a.addbeg(5);
    a.after(32, 9);
    a.display();
    a.deletefront();
    a.display();
    a.delend();
    a.display();
    a.delpos(2);
    a.display();
}