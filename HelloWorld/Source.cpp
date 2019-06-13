#include <stdio.h>
#include <iostream>

using namespace std;

class HelloWorld {
public:
	void print();
};

void HelloWorld::print() {
	printf("こんにちは、ワールド。\n");
	cout << "HelloWorld\n";
}

int main() {
	HelloWorld helloWorld;

	helloWorld.print();

	system("pause");

	return 0;
}