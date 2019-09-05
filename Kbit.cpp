#include "Kbit.h"
#include <iostream>

using namespace std;

Kbit::Kbit()
{
	K = 0;
	N = 0;
}


Kbit::~Kbit()
{
}

void Kbit::getInputs() {
	cout << "Please enter N number:";
	cin >> N;
	cout << "Number recieved" << endl;
	cout << "Please enter K number (bit to chenge):";
	cin >> K;
	cout << "Number recieved" << endl;
	cout << "Number in bits: ";
	printBits(N);
	setKBit(N, K);
	cout << "Number after bit change: " << result << endl;
	printBits(result);
}

void Kbit::setKBit(unsigned int num1, unsigned int num2) {
	int temp = pow(2, num2-1);
	result = num1 | temp;
	cout << "Result: " << result << endl;
}

void Kbit::printBits(unsigned int number) {
	for (int i = 0; i < BITS; i++) {
		bits[i] = 0;
	}
	int counter = 0;
	while (number > 0) {
		bits[counter] = number % 2;
		counter++;
		number = number / 2;
	}

	for (int i = BITS - 1; i >= 0; i--) {
		cout << bits[i];
	}
	cout << "" << endl;
}