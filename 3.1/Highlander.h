#ifndef HIGHLANDER_H
#define HIGHLANDER_H
#include <iostream> 
#include <string> 
using namespace std; 

class Highlander{

private: 
	string name; 
	static int count; 


public: 
	Highlander(); 
	Highlander(string name);
	~Highlander(); 

	
	static string speak(); 
	string status() const; 



};
#endif

