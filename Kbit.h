#pragma once
#define BITS 8

class Kbit
{
private:
	unsigned int N, K, result = 0;
	int bits[BITS] = { 0 };

public:
	Kbit();
	~Kbit();
	void getInputs();
	void setKBit(unsigned int, unsigned int);
	void printBits(unsigned int);
};

