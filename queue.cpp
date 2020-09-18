// William Taylor
// 010840237
// PF2 - Project4 - Midpoint

#include "queue.h"

Queue::Queue() //constructor
{
    count   = 0;
    front   = 0;
    back    = 0;
    size    = 0;
    insertCount = 0;
    removeCount = 0;
}

Queue::~Queue() //destructor
{
    data.clear();
    count = 0;
    front = 0;
    back  = 0;
    size  = 0;
    data.resize(0);
    
    
}

void Queue::insert(int num) //inserts an item into the queue
{
    insertCount++;
    if (isFull())
    {
 
        //cout << "queue is full." << endl;
        data.resize(data.size() + 1);
        size = size + 1;
        
        back = (back + 1) % size;
        data[back] = num;
        count++;
        //cout << "added: " << num << endl;
    }
    else
    {
        back = (back + 1) % size;
        data[back] = num;
        //cout << "added: " << num << endl;
        count++;
    }
}

int Queue::remove() //removes an item from the queue
{
    removeCount++;
    if(!(isEmpty()))
    {
        count--;
        int num = data[front];
        front = (front + 1) % size;
        //data.resize(data.size() - 1);
        
        //cout << "removed: " << num << endl;
    }
    else
    {
        cout << "empty" << endl;
    }
}

bool Queue::isFull() //checks to see if the queue is full
{
    return(count >= size);
}

bool Queue::isEmpty() //checks to see if the queue is empty
{
    return(count <= 0);
}

int Queue::getCount() //gets how many items are in the queue
{
    return(data.size());
}

void Queue::print() //prints what's inside the queue
{
    cout << "insert count = " << insertCount << endl;
    cout << "remove count = " << removeCount << endl;
    cout << "queue size = " << count << endl;
    cout << "queue contents: ";
    for (int i = 0; i < count; i++)
    {
        cout << data.at(i) << " ";
    }
    cout << endl << endl;
}












