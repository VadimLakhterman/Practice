#include <iostream>
#include "PowOf2.h"

using namespace std;

PowOf2::PowOf2()
{
	this->test = 0;
}


PowOf2::~PowOf2()
{
}


void PowOf2::getInputs() {
	cout << "Please enter N number:";
	cin >> N;
	cout << "Number recieved" << endl;
	powerCalc(N);
}

void powerCalc(unsigned int number) {
	if (number > 0) {

	}
}