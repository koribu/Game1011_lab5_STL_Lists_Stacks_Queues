#include <iostream>
#include "DynTempQueue.h"
#include <cstdlib>
using namespace std;

//************************
// Constructor.          *
//************************
template<class T>
DynTempQueue<T>::DynTempQueue()
{
   front = nullptr;
   rear = nullptr;   
}

//************************
// Destructor.           *
//************************
template<class T>
DynTempQueue<T>::~DynTempQueue()
{
   clear();
}

//********************************************
// Function enqueue inserts the value in value *
// at the rear of the queue.                 *
//********************************************
template<class T>
void DynTempQueue<T>::enqueue(T value)
{       
    if (isEmpty())
    {
       front = new QueueNode(value);
       rear = front;
    }
    else
    {
       rear->next = new QueueNode(value);
       rear = rear->next;
    }    
}

//**********************************************
// Function dequeue removes the value at the   *
// front of the queue, and copies it into num. *
//**********************************************
template<class T>
void DynTempQueue<T>::dequeue(T &num)
{
   QueueNode *temp;
   if (isEmpty())
   {
      cout << "The queue is empty.\n";
      exit(1);
   }
    else
    {
       num = front->value;
       temp = front;
       front = front->next;
       delete temp;      
    } 
}

//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise.             *
//*********************************************
template<class T>
bool DynTempQueue<T>::isEmpty() const
{
    if (front == nullptr)
       return true;
    else 
       return false;
}

//********************************************
// Function clear dequeues all the elements  *
// in the queue.                             *
//********************************************
template<class T>
void DynTempQueue<T>::clear()
{
    T value;   // Dummy variable for dequeue

    while(!isEmpty())
       dequeue(value);
}