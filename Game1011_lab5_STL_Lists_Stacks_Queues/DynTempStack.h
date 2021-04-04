#ifndef DYNTEMPSTACK_H
#define DYNTEMPSTACK_H

template<class T>
class DynTempStack
{
private:
   class StackNode
   {
      friend class DynTempStack;
      T value;
      StackNode *next;
      // Constructor
      StackNode(T value1, StackNode *next1 = nullptr)
       {
         value = value1;
         next = next1;
       }
   };
   StackNode *top;
public:
   DynTempStack() { top = nullptr; }
   void push(T);
   void pop(T&);
   bool isEmpty() const;
};	
#endif