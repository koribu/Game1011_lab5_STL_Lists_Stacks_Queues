#ifndef DYNTEMPQUEUE_H
#define DYNTEMPQUEUE_H

#include <iostream>
#include <cstdlib>
using namespace std;

template<class T>
class DynTempQueue
{
private:

	class QueueNode
	{
      friend class DynTempQueue;
	  T value;
      QueueNode *next;
      QueueNode(T value1, QueueNode *next1 = nullptr)
      {
         value = value1;
         next = next1;
      }
	};
	// These track the front and rear of the queue
	QueueNode *front;
	QueueNode *rear;	
public:
   // Constructor and Destructor
	DynTempQueue();
   ~DynTempQueue();
	
	// Member functions
   void enqueue(T);
   void dequeue(T&);
   bool isEmpty() const;     
   void clear();
};



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
void DynTempQueue<T>::dequeue(T& value)
{
    QueueNode* temp;
    if (isEmpty())
    {
        cout << "The queue is empty.\n";
        exit(1);
    }
    else
    {
        value = front->value;
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

    while (!isEmpty())
        dequeue(value);
}
#endif