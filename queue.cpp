#include <iostream>
using namespace std;

int front = -1;
int rear = -1;
int arr[6];
int n = 6;

void enqueue(int val);
void dequeue();
void peek();
void display();

int main()
{
    int choose = 0;
    while (choose != 5)
    {
        cout << "ENTER CHOICE:" << endl
             << "1.enqueue 2.dequeue 3.peek 4.display 5.exit" << endl;
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            int val;
            cout << "ENTER THE ELEMENT TO ENQUEUE: ";
            cin >> val;
            enqueue(val);
            break;
        }
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            cout << endl
                 << "INVALID CHOICE" << endl;
            break;
        }
        }
    return 0;
}

void enqueue(int val)
{
    if (rear == n - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        arr[rear] = val;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        cout << "Deleted element: " << arr[front] << endl;
        for (int i = front; i < rear; i++)
        {
            arr[i] = arr[i + 1];
        }
        rear--;
        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

void peek()
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "We are at: " << arr[front] << endl;
    }
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
