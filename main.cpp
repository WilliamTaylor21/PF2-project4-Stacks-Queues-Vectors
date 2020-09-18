// William Taylor
// 010840237
// PF2 - Project4 - Midpoint

#include <iostream>
#include "queue.h"
#include "stack.h"
#include <vector>
#include <time.h>

using namespace std;

int testStack(int it)
{
    Stack stack;
    int x = 0;
    for(int i = 0; i < it; i++)
    {
        x = rand() % 100 + 1;
        
        if((x >= 49) || (stack.isEmpty()))
        {
           stack.push(rand() % 10);
        }
        
        else 
        {
           stack.pop();
        }
    }
    stack.print();
}

int testQueue(int it)
{
    Queue queue;
        int y = 0;
        for(int i = 0; i < it; i++)
        {
            y = rand() % 100 + 1;
            
            if((y >= 49) || (queue.isEmpty()))
            {
                queue.insert(rand() % 10);
            }
            
            else 
            {
                queue.remove();
            }
        }
        queue.print();
}

int main()
{
    //getting user input
    int iterations = 1000;
    cout << "Enter how many iterations you would like (Default is 1000). " << endl;
    cin >> iterations;
    if (cin.fail())
    {
        iterations = 1000;
    }
    
    srand (time(0));
    //testing stack
    clock_t	time1=clock();

    testStack(iterations);
    
    clock_t	time2=clock();
    double run_time	= (time2-time1)/(double)CLOCKS_PER_SEC;
    cout <<	"Stack run time: " <<	run_time <<	" seconds\n" << endl;
    
    //testing queue
    clock_t	time3=clock();

    testQueue(iterations);
    
    clock_t	time4=clock();
    double run_time2	= (time4-time3)/(double)CLOCKS_PER_SEC;
    cout <<	"Queue run time: " <<	run_time2 << " seconds\n" << endl;
    
}




