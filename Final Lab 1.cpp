#include <iostream>
using namespace std;

#define size 15

int arr[size], top = -1;

bool empty()
{
    if (top == -1)
        return true;
    else
        return false;
}

void push(int x)
{
    if (top == size - 1)
    {
        cout << "Queue over flowed" << endl;
    }

    top++;
    arr[top] = x;
}

void pop()
{
    if (empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        for (int i = 0; i < top; i++)
        {
            arr[i] = arr[i + 1];
        }
        top--;
    }
}

void display()
{
    if (empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    push(12);
    push(18);

    cout << "Queue elements: " << endl;
    display();

    cout << endl;

    pop();

    cout << "Queue elements after dequeue: ";
    display();

    return 0;
}
