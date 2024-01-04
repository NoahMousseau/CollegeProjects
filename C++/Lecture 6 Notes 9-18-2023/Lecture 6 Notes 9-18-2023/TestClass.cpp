#include <iostream>

class TestClass {
private:
	int data;
public:
	TestClass() {
		data = 0;
	}
	TestClass(int x) {
		data = x;
	}
	int getData() const {
		return data;
	}
};