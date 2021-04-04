#include <iostream>
#include"DynTempStack.h"
#include "DynTempQueue.h"

using namespace std;

int main()
{
	DynTempStack<float> floatStackList;
	DynTempStack<string> stringStackList;
	float valueF;
	string names[] = {"Adam","Bart","David","Ella","Freud","Karen","Marta","Rash","Penny","Sinan","Ursula","Vladimir","Wallace","Zeyna"};

	DynTempQueue<int> doubleQueueList;
	DynTempQueue<string> stringQueueList;

	cout << "Pushing to Dynamic Template Stacks..." << endl;
	cout << "Floats are: ";
	for (float i = 0; i < 30; i*2.2)
	{
		cout << i << ", ";
		floatStackList.push(i);
	}
	cout << "\nNames are: ";
	for (string name : names)
	{
		stringStackList.push(name);
	}
	cout << "\n\nNow Popping from Dynamic Template Stacks..." << endl;
	for()

	
}