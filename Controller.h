#pragma once
#include <string>
#include <map>
#include <vector>
#include <iterator>
#include "Kbit.h"
#include "PowOf2.h"

using namespace std;

class Controller
{
private:
	enum Tasks
	{
		DEFAULT_TASK = 0,
		KBIT_TASK = 1,
		POWOF2 = 2,
		END
	};

	vector<string> tasksList;
	int runningTask;
	bool run;
	Kbit* kbit;
	PowOf2* powOf2;

public:
	Controller();
	~Controller();
	void Run();
	void runTask(int);
	int getRunningTask();
	void setRunningTask(int);
};

