#include "Highlander.h"
#include <iostream> 
#include <string>



using namespace std; 

int Highlander::count = 0;

Highlander::Highlander() : name("Unamed") {

	count++; 

}
Highlander::Highlander(string name) : name(name) {
	count++; 

}
Highlander::~Highlander() {
	count--; 

}
string Highlander::speak() {
	return "There can be only one. But now there are " + to_string(count); 

}
string Highlander::status()const {
	if (count == 1)
		return "Immortal"; 
	else {
		return "murderous"; 

	}
}