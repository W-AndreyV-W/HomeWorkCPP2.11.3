#include "Leaver.h"

Leaver::Leaver(std::string name) {
	_name = name;
}

void Leaver::leave() {
	std::cout << "�� ��������, " << _name << "!" << std::endl;
}