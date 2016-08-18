#include "Animal.h"
#include <iostream>

Animal::Animal(){
	cout << "Animal created." << endl;
}

Animal::~Animal(){
	cout << "Animal destroyed." << endl;
}

void Animal::Sound() {
	cout << "Animal makes sound." << endl;
}

void Animal::WellDone() {

}