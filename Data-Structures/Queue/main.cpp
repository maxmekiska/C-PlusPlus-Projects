#include <iostream>
#include "Queue.h"

int main() {
	Queue test;
	test.enqueue(82828);
	test.peek();
	test.enqueue(3);
	test.enqueue(3);
	test.enqueue(3);
	test.enqueue(4);
	test.enqueue(1918);
	test.dequeue();
	test.peek();
	test.dequeue();
	test.peek();
	test.dequeue();
	test.peek();
	test.dequeue();
	test.peek();
	test.dequeue();
	test.peek();
	test.dequeue();
	test.peek();
	test.enqueue(12);
	test.peek();
	



	system("pause");
	return 0;
}
