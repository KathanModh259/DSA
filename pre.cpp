#include <iostream>
using namespace std;

void push()
{
    char temp[] = "hello";
}
int prec(char x)
{
    switch (x)
    {
    case '+':
        return 1;
        break;
    case '-':
        return 1;
        break;
    case '*':
        return 2;
        break;
    case '/':
        return 2;
        break;
    case '^':
        return 3;
        break;
    }
}
int main()
{
    char a[] = "A + B * C + D";
    char sym, stack[], b[];
    int n = (sizeof(a) / sizeof(a[0])) - 1;
    cout << n << endl;
    int top = -1;
    for (i = 0; i < 100; i++)
    {
        sym = a[i];

        switch (sym)
        {
        case '(':
            // push
        case ')':
            // pop
        case '+' || '-' ||:

        default:
        }
    }
}

// #include <iostream>
// #include <stack>
// #include <cctype>
// #include <string>

// using namespace std;

// int precedence(char op)
// {
//     if (op == '+' || op == '-')
//         return 1;
//     if (op == '*' || op == '/')
//         return 2;
//     return 0;
// }

// string infixToPostfix(const string &infix)
// {
//     stack<char> operators;
//     string postfix;

//     for (char ch : infix)
//     {
//         if (isalnum(ch))
//         {
//             postfix += ch;
//         }
//         else if (ch == '(')
//         {
//             operators.push(ch);
//         }
//         else if (ch == ')')
//         {
//             while (!operators.empty() && operators.top() != '(')
//             {
//                 postfix += operators.top();
//                 operators.pop();
//             }
//             operators.pop();
//         }
//         else
//         {
//             while (!operators.empty() && precedence(operators.top()) >= precedence(ch))
//             {
//                 postfix += operators.top();
//                 operators.pop();
//             }
//             operators.push(ch);
//         }
//     }

//     while (!operators.empty())
//     {
//         postfix += operators.top();
//         operators.pop();
//     }

//     return postfix;
// }

// int main()
// {
//     string infix;

//     cout << "Enter infix expression: ";
//     getline(cin, infix);

//     string postfix = infixToPostfix(infix);

//     cout << "Postfix expression: " << postfix << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstring>

// using namespace std;

// #define MAX 100

// class Stack
// {
// private:
//     char arr[MAX];
//     int top;

// public:
//     Stack() : top(-1) {}

//     void push(char c)
//     {
//         if (top < MAX - 1)
//         {
//             arr[++top] = c;
//         }
//     }

//     char pop()
//     {
//         if (top >= 0)
//         {
//             return arr[top--];
//         }
//         return '\0';
//     }

//     char peek()
//     {
//         if (top >= 0)
//         {
//             return arr[top];
//         }
//         return '\0';
//     }

//     bool isEmpty()
//     {
//         return top == -1;
//     }
// };

// int precedence(char op)
// {
//     if (op == '+' || op == '-')
//         return 1;
//     if (op == '*' || op == '/')
//         return 2;
//     return 0;
// }

// void infixToPostfix(const char *infix, char *postfix)
// {
//     Stack s;
//     int j = 0;

//     for (int i = 0; i < strlen(infix); ++i)
//     {
//         char ch = infix[i];

//         if (ch >= 'A' && ch <= 'Z')
//         {
//             postfix[j++] = ch;
//         }
//         else if (ch == '(')
//         {
//             s.push(ch);
//         }
//         else if (ch == ')')
//         {
//             while (!s.isEmpty() && s.peek() != '(')
//             {
//                 postfix[j++] = s.pop();
//             }
//             s.pop();
//         }
//         else
//         {
//             while (!s.isEmpty() && precedence(s.peek()) >= precedence(ch))
//             {
//                 postfix[j++] = s.pop();
//             }
//             s.push(ch);
//         }
//     }

//     while (!s.isEmpty())
//     {
//         postfix[j++] = s.pop();
//     }

//     postfix[j] = '\0';
// }

// int main()
// {
//     char infix[MAX], postfix[MAX];

//     cout << "Enter infix expression: ";
//     cin.getline(infix, MAX);

//     infixToPostfix(infix, postfix);

//     cout << "Postfix expression: " << postfix << endl;

//     return 0;
// }
