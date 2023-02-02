#include "MyException.h"

const std::string& MyException::what() const {
	return _whatStr;
}
void func(int num) {
	MyException ex;
	if (num == 0)
		throw ex;
}


