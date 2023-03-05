#pragma once
#include <iostream>

class Leaver {
public:
	Leaver(std::string name);
	void leave();
private:
	std::string _name;
};