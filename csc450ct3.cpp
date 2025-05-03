#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	cout << "Welcome to Critical Thinking Assignment 3. I will need 3 integers!" << endl;
	
	// Create space in dynamic memory (heap) for our numbers
	// Can also do (int *)malloc(sizeof(int)) but this seems cleaner
	// and more idiomatic for c++ vs regular C. 
	int* numberAPtr = new int; 
	int* numberBPtr = new int; 
	int* numberCPtr = new int; 
	
	// Ask for the inputs, store it in dynamic memory 
	// (Had used temp variable and assigned to pointer but apparently
	// you can use * with cin to store at this address).
	
	cout << "Integer A: ";
	cin >> *numberAPtr;
	 
	cout << "Integer B: ";
	cin >> *numberBPtr;
	
	cout << "Integer C: ";
	cin >> *numberCPtr;
	
	// Now print them out 
	cout << "Your integers are:" << endl;
	cout << "Int A: "<< *numberAPtr << ", int B: "<< *numberBPtr << ", int C: " << *numberCPtr << endl;
	
	// Dealloc the memory we allocated 
	delete numberAPtr;
	delete numberBPtr;
	delete numberCPtr;
		
	return 0;
}