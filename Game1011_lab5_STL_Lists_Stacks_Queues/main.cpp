#include <iostream>
#include"DynTempStack.h"
#include "DynTempQueue.h"
#include <string>

using namespace std;

int main()
{
	// Creating Dynamic Stack Lists
	DynTempStack<float> floatStackList;
	DynTempStack<string> stringStackList;

	// Creating Dynamic Queue Lists
	DynTempQueue<int> intQueueList;
	DynTempQueue<string> stringQueueList;

	
	float valueF;
	int valueInt;
	string name;
	string names[] = {"Adam","Bart","David","Ella","Freud","Karen",
		"Marta","Rash","Penny","Sinan","Ursula","Vladimir","Wallace","Zeyna"};
	
	
	//----------Dynamic Stacks Demonstration------------//
	
	cout << "\n     //----------Dynamic Stacks Demonstration------------//" << endl << endl;	
	cout << "--+ Pushing to Dynamic Template Stacks... +--" << endl<<endl;
	cout << "Pushed Floats are: ";

	for (float i = 1; i < 30;  i += 3.14f) 	//Pushing floats to the Float Stack List
	{
		cout << i << ", ";
		floatStackList.push(i);
	}
	
	cout << "\nPushed Strings are: ";
	for (string n : names) 	        //Pushing names from array to the String Stack List
	{
		cout << n << ", ";
		stringStackList.push(n);
	}

	cout << "\n\n--+ Now Popping from Dynamic Template Stacks... +--" << endl<<endl;
	cout << "Popped Floats were: ";
	while (!floatStackList.isEmpty())  	//Popping floats from the Float Stack List and demonstrate
	{
		floatStackList.pop(valueF);
		cout << valueF << ", ";	
	}
	cout << "\nPopped Strings were: ";
	while (!stringStackList.isEmpty())    //Popping names from the String Stack List and demonstrate
	{
		stringStackList.pop(name);
		cout << name << ", ";
	}

	cout << endl << endl;

	
	//----------Dynamic Queue Demonstration------------//
	//----------Dynamic Queue Demonstration------------//
	
	cout<<"\n     //----------Dynamic Queue Demonstration------------//" << endl << endl;

	cout << "--+ Enqueueing to Dynamic Template Queue... +--" << endl << endl;
	cout << "Enqueued Floats are: ";

	for (int i = 0; i < 20; i+=2)    //Enqueueing Ints to the int Queue List
	{
		cout << i << ", ";
		intQueueList.enqueue(i);
	}

	cout << "\nEnqueued String are: ";
	for (string n : names) 	        //Enqueueing names from array to the String Queue List
	{
		cout << n << ", ";
		stringQueueList.enqueue(n);
	}

	cout << "\n\n--+ Now Dequeueing from Dynamic Template Queue... +--" << endl << endl;
	cout << "Dequeued Floats were: ";
	while (!intQueueList.isEmpty())  	//Popping floats from the Float Stack List and demonstrate
	{
		intQueueList.dequeue(valueInt);
		cout << valueInt << ", ";
	}
	cout << "\nDequeued Strings were: ";
	while (!stringQueueList.isEmpty())    //Popping names from the String Stack List and demonstrate
	{
		stringQueueList.dequeue(name);
		cout << name << ", ";
	}
	
	cout << endl << endl;

}