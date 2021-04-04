#ifndef DYNTEMPQUEUE_H
#define DYNTEMPQUEUE_H

template<class T>
class DynTempQueue
{
private:
	class QueueNode
	{
      friend class DynIntQueue;
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
#endif