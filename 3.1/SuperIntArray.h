#ifndef SUPERINTARRAY_H
#define SUPERINTARRAY_H
#include <iostream> 
#include<vector> 

using namespace std; 


class SuperIntArray{
private: 

	int* nums;
	int numberOfNums; 

public: 
	SuperIntArray();
	SuperIntArray(int nums[], int size); 
	SuperIntArray(int nums); 
	SuperIntArray(vector<int>numbers); 

	SuperIntArray(const SuperIntArray& other); 

	~SuperIntArray(); 

	int* getNums()const; 
	int getSize()const; 
	void setNums(int nums[], int size); 

	void add(int num); 
	int get(int index) const; 
	void change(int index, int value); 

	static int getMax(int nums[], int size); 
	static int getMin(int nums[], int size);
	static double getMean(int nums[], int size);
	

	

};
#endif
