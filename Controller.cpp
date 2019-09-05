#include <iostream>
#include "Controller.h"

using namespace std;

Controller::Controller()
{
	tasksList.push_back("kbit");
	tasksList.push_back("pow of 2");
	kbit = new Kbit();
	powOf2 = new PowOf2();
	setRunningTask(DEFAULT_TASK);
	this->run = true;
}


Controller::~Controller()
{
	if (this->kbit) {
		delete kbit;
	}
	if (this->powOf2) {
		delete powOf2;
	}
}

void Controller::Run() {
	int usersChoise = 0;
	while (run) {
		cout << "Wich program would you like to run? " << "(choose " << END << " for exit) " << endl;
		for (int i = 0; i < tasksList.size() ; i++) {
			cout << i+1 << " : " << tasksList[i] << " ";
		}
		cout << "" << endl;
		cin >> usersChoise;

		if (usersChoise != END) {
			runTask(usersChoise);
		}
		else
			break;
	}
}

void Controller::runTask(int TaskName)
{
	switch (TaskName)
	{
	case KBIT_TASK:
		if (getRunningTask() != KBIT_TASK) {
			setRunningTask(TaskName);
		}
		kbit->getInputs();
		break;
	case POWOF2:
		if (getRunningTask() != KBIT_TASK) {
			setRunningTask(TaskName);
		}
		kbit->getInputs();
		break;
	default:
		break;
	}
}

void Controller::setRunningTask(int taskName) {
	runningTask = taskName;
}

int Controller::getRunningTask() {
	return runningTask;
}