#pragma once
#define SIZE 32

class PowOf2
{
private:
	enum POW {
		POW0 = 0,
		POW1,
		POW2,
		POW3,
		POW4,
		POW5,
		POW6,
		POW7,
		POW8,
		POW9,
		POW10,
		POW11,
		POW12,
		POW13,
		POW14,
		POW15,
		END
	};

	unsigned int N;
	unsigned int test;
public:
	PowOf2();
	~PowOf2();
	void getInputs();
	void powerCalc(unsigned int);
};

