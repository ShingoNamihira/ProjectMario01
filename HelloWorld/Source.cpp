#include <stdio.h>
#include <iostream>

using namespace std;

class HelloWorld {
public:
	void print();
};

void HelloWorld::print() {
	printf("����ɂ��́A���[���h�B\n");
	cout << "HelloWorld\n";
}

int main() {
	HelloWorld helloWorld;

	helloWorld.print();

	system("pause");

	return 0;
}