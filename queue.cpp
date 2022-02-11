#include<iostream>
using namespace std;
#define size 20
class queue
{
    int arr[size];
    int data,front,rear;
    public:
    queue()
    {
        rear=front=-1;
    }
    bool isfull();
    bool isempty();
    int enqueue(int n);
    void dequeue();
};
bool queue::isempty()
{
    return (front==-1);
}
bool queue::isfull()
{
    return (rear=size-1);
}
int queue::enqueue(int n)
{
    if(isfull())
    {
        cout<<"queue full!!!!"<<endl;
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        arr[rear]=n;
    }
}
void queue::dequeue()
{
    if(isempty())
    {
        cout<<"queue is empty!!!!"<<endl;
    }
    else
    {
        cout<<"the deleted element:"<<arr[front]<<endl;
        front++;
        if(front>rear)
        {
            front=rear=-1;
        }
    }
}
int main()
{
    queue a;
    a.enqueue(6);
    a.enqueue(8);
    a.dequeue();
}