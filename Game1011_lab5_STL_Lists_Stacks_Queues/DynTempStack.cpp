#include <iostream>
#include "DynTempStack.h"
#include <cstdlib>
using namespace std;
    
//**************************************************
// Member function push pushes the argument onto   *
// the stack.                                      *
//**************************************************

template<class T>
void DynTempStack<T>::push(T value)
{
   top = new StackNode(value, top);
}
   
//*****************************************************
// Member function pop removes the value at the top   *
// of the stack and copies it into the variable       *
// passed as an argument.                             *
//*****************************************************
template<class T>
void DynTempStack<T>::pop(T &value)
{
    StackNode *temp;
   
    if (isEmpty())
    {
        cout << "The stack is empty.\n";
        exit(1);
    }
    else   // Pop value off top of stack
    {
       value = top->value;
       temp = top;
       top = top->next;
       delete temp;
    }
} 

//*****************************************************
// Member function isEmpty returns true if the stack  *
// is empty, or false otherwise.                      *
//*****************************************************
template<class T>
bool DynTempStack<T>::isEmpty() const
{
   if (!top)
       return true;
   else
       return false;    
}