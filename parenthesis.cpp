#include <iostream>
#include <vector>
using namespace std;

vector<int> stack;
int top = -1;

void push()
{
    if (top >= MAX - 1)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        int value;
        cout << "Enter the element: ";
        cin >> value;

        top++;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "The element is " << stack[top] << endl;

        top--;
    }
}

int validParenthesis(string s)
{
    for (int)
    {
    }
}

int main()
{
    string s;
    cout << "Enter the parenthesis";
    cin >> s;
}