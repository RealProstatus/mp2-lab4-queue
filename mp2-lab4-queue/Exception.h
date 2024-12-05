#pragma once

#include<iostream>
#include<string>

class Exception {
	virtual void show() = 0;
	virtual std::string retmsg() = 0;
};

class EPushInFullQueue : public Exception {
	void show() { std::cout << "Push in full queue!"; }
	std::string retmsg() { return "Push in full queue!"; }
};

class EPopFromEmptyQueue : public Exception {
	void show() { std::cout << "Pop from empty queue!"; }
	std::string retmsg() { return "Pop from empty queue!"; }
};

class EFrontInEmptyQueue : public Exception {
	void show() { std::cout << "Front from empty queue!"; }
	std::string retmsg() { return "Front from empty queue!"; }
};

class EBackInEmptyQueue : public Exception {
	void show() { std::cout << "Back from empty queue!"; }
	std::string retmsg() { return "Back from empty queue!"; }
};

class ENotEnoughCores : public Exception {
	void show() { std::cout << "Not enough cores for task!"; }
	std::string retmsg() { return "Not enough cores for task!"; }
};