#include <bits/stdc++.h>
using namespace std;

void pop_qu(stack<int> &qu)
{
    stack<int> temp;
    while (not qu.empty())
    {
        temp.push(qu.top());
        qu.pop();
    }
    temp.pop();
    while (not temp.empty())
    {
        qu.push(temp.top());
        temp.pop();
    }
}

int main()
{
    stack<int> qu;
    // push is same for both
    qu.push(17);
    qu.push(7);
    qu.push(6);
    qu.push(2);
    qu.push(5);
    pop_qu(qu);
    pop_qu(qu);
    while (not qu.empty())
    {
        cout << qu.top() << " ";
        qu.pop();
    }
}