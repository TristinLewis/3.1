#include "SuperIntArray.h"
#include <iostream> 
#include <vector> 

SuperIntArray::SuperIntArray() {
	nums = nullptr;
	numberOfNums = 0;
}
SuperIntArray::SuperIntArray(int arr[], int size) {
	numberOfNums = size;
	nums = new int[numberOfNums];
	for (int i = 0; i < numberOfNums; i++) {
		nums[i] = arr[i];

	}
}
SuperIntArray::SuperIntArray(int nums) {
	numberOfNums = 1;
	nums = new int[1];
	nums[0] = num;
}
SuperIntArray::SuperIntArray(vector<int>numbers) {
	numberOfNums = numbers.size();
	nums = new int[numberOfNums];
	for (int i = 0; i < numberOfNums; i++) {
		nums[i] = numbers[i];
	}
}
SuperIntArray::SuperIntArray(const SuperIntArray& otherArr) {
	numberOfNums = otherArr.numberOfNums; 

	if (numberOfNums > 0) {
		nums = new int[numberOfNums]; 
	}
	for (int i = 0; i < numberOfNums; i++) {
		nums[i] = otherArr.nums[i];
	}
	


}

SuperIntArray::~SuperIntArray() {
	delete[] nums;

}

int* SuperIntArray::getNums()const {
	return nums;
}
int SuperIntArray::getSize()const {
	return numberOfNums;
}
void SuperIntArray::setNums(int arr[], int size) {
	delete[]nums;
	numberOfNums = size;
	nums = new int[size];
	for (int i = 0; i < size; i++) {
		nums[i] = arr[i];

	}
}

void SuperIntArray::add(int num) {
	int* newNums = new int[numberOfNums + 1];
	for (int i = 0; i < numberOfNums; i++) {
		newNums[i] = nums[i];
	}
	newNums[numberOfNums] = num;
	delete[] nums;
	nums = newNums;
	numberOfNums++;

}
int SuperIntArray::get(int index) const {
	if (index < 0 || index >= numberOfNums){
		cout << "Error this index is out of range." << endl; 
		return -1; 

	}
	return nums[index]; 


}
void SuperIntArray::change(int index, int newValue) {
	if (index < 0 || index >= numberOfNums) {
		cout << "Error, this index is out of range." << endl; 
		return; 
	}
	nums[index] = newValue; 
}

int SuperIntArray::getMax(int nums[], int size) {
	if (size <= 0) {
		cout << "Error, an array size must be bigger than 0." << endl << endl; 
		return -1; 

	}
	int max = nums[0]; 
	for (int i = 0; i < size; i++) {
		if (nums[i] > max) {
			max = nums[i]; 

		}
	}
	return max; 

}
int SuperIntArray::getMin(int nums[], int size) {
	if (size <= 0) {
		cout << "Error, an array size must be bigger than 0." << endl << endl;
		return -1;

	}
	int min = nums[0];
	for (int i = 0; i < size; i++) {
		if (nums[i] < min) {
			min = nums[i];

		}
	}
	return min;
}
double SuperIntArray::getMean(int nums[], int size) {
	if (size <= 0) {
		cout << "Error, an array size must be bigger than 0." << endl << endl;
		return -1;

	}
	int sum;
	for (int i = 0; i < size; i++) {
		
			sum += nums[i];
	}
	return static_cast<double>(sum) / size; 

}