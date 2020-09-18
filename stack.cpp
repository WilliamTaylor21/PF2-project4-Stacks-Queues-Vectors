// William Taylor
// 010840237
// PF2 - Project4 - Midpoint

#include "stack.h"

Stack::Stack() //constructor
{
    count = 0;
    pushCount = 0;
    popCount = 0;
}

Stack::~Stack() //destructor
{
    data.clear();
    count = 0;
}

void Stack::push(int num) //inserts an item into the stack
{
    data.push_back(num);
    count++;
    pushCount++;
}

int Stack::pop() //removes an item from the stack
{
    data.pop_back();
    count--;
    popCount++;
}

int Stack::top() //finds the top item in the stack
{
    cout << data.back() << endl;
}

bool Stack::isFull() //checks to see if the stack is full
{
    return(false); //Vector is never full, if it needs more space it will add space.
}

bool Stack::isEmpty() //checks to see if the stack is empty
{
    return (data.empty());
}

int Stack::getCount() //gets how many items are in the stack
{
    return (data.size());
}

void Stack::print() //prints what's inside the stack
{
    cout << endl << "push count = " << pushCount << endl;
    cout << "pop count = " << popCount << endl;
    cout << "stack size = " << count << endl;
    cout << "stack contents: ";
    for (int i = 0; i < count; i++)
    {
        cout << data.at(i) << " ";
    }
    cout << endl << endl;
}