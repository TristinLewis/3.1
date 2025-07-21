#include<iostream> 
#include "Highlander.h"
#include <vector> 
#include "SuperIntArray.h"
using namespace std; 



int main() {
	//Highlander Demonstration
	Highlander person1("The Rock");
	cout << Highlander::speak() << endl;
	cout << person1.status() << endl;

	Highlander person2("Diddy");
	cout << Highlander::speak() << endl;
	cout << person2.status() << endl;

	Highlander person3("Jack Nicholson");
	cout << Highlander::speak() << endl;
	cout << person3.status() << endl;
	//SuperIntArray Demonstration



	SuperIntArray defaulta;
	defaulta.add(20);
	defaulta.add(30);
	defaulta.add(40);
	cout << "Default a array after adding values";
	for (int i = 0; i < defaulta.getSize(); i++) {
		cout << defaulta.get(i) << ",";

	}





	cout << endl;
	int arr[] = { 25, 36, 43 };
	SuperIntArray defaultb(arr, 3);
	cout << "Default b array: ";
	for (int i = 0; i < defaultb.getSize(); i++) {
		cout << defaultb.get(i) << ",";

	}






	cout << endl;
	SuperIntArray defaultc(103.45);
	cout << "Default c array";
	for (int i = 0; i < defaultc.getSize(); i++) {
		cout << defaultc.get(i) << ",";

	}






	vector<int> defaultv = { 7, 94, 99 };
	SuperIntArray defaultd(defaultv);
	cout << "Default arra d with vector.";
	for (int i = 0; i < defaultd.getSize()i++) {
		cout << defaultd.get(i);

	}






	cout << endl;
	cout << " Changing defaultd[1] from " << defaultd.get(1) << " to 4 " << endl;
	defaultd.change(1, 4);
	cout << "Your new value at d[1]: " << defaultd.get(1) << endl;
	cout << endl << endl;

	int newArr[] = { 4, 6, 7, 8, 9 };
	int size = 5; 

	cout << "Static" << endl
		<< "Max:" << SuperIntArray::getMax(newArr, size) << endl
		<< "Min:" << SuperIntArray::getMin(newArr, size) << endl
		<< "Mean:" << SuperIntArray::getMean(newArr, size) << endl; 



	//Copy COnstructor demo

	SuperIntArray originalArr; 
	originalArr.add(3); 
	originalArr.add(6); 
	originalArr.add(9); 

	cout << "The original array"; 
	for (int i = 0; i < originalArr.getSize(); i++) {
		cout << originalArr.get(i) << "," << endl; 

	}
	cout << endl; 

	SuperIntArray copyArr(originalArr); 

	cout << "THe copied array."; 
		for (int i = 0; i < copyArr.getSize(); i++) {
			cout << copyArr.get(i) << "," << endl;

		}
	cout << endl;



	return 0; 
}