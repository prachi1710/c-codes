#include <iostream>
using namespace std;
class stack
{
    int *arr, tos, size;

public:
    stack();
    stack(int);
    stack(const stack &);
    ~stack();
    bool isempty() const;
    bool isfull() const;
    void push(int);
    int pop();
    int peek() const;
};
stack::stack()
{
    arr = new int[10];
    tos = -1;
    size = 10;
}
stack::stack(int size)
{
    arr = new int[size];
    tos = -1;
    this->size = size;
}
stack::stack(const stack &ob)
{
    arr = new int[ob.size];
    tos = ob.tos;
    size = ob.size;
    for (int i = 0; i < tos; i++)
        arr[i] = ob.arr[i];
}
stack::~stack()
{
    delete[] arr;
}
bool stack::isempty() const
{
    return tos == -1;
}
bool stack::isfull() const
{
    return tos == size - 1;
}
void stack::push(int data)
{
    if (isfull())
    {
        cout<<"data cant be added"<<endl;
        return;
    }
    arr[++tos] = data;
}
int stack::pop()
{
    if (isempty())
    {
        cout<<"stack is empty"<<endl;
    }
    return arr[tos--];
}
int stack::peek() const
{
    if (tos > -1)
        return arr[tos];
}
int main()
{
    stack a(3);
    a.push(15);
    a.push(20);
    a.push(12);
    cout<<a.peek()<<endl;
    a.pop();
    cout<<a.peek()<<endl;
    a.pop();
    cout<<a.peek()<<endl;
    a.pop();
    cout<<a.peek()<<endl;
}

