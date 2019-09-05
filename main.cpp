#include <iostream>
#include "Controller.h"

using namespace std;

int main() {
	cout << "practice started..." << endl;
	Controller* controller = new Controller();
	controller->Run();
	if (controller) {
		delete controller;
	}
	return 0;
}