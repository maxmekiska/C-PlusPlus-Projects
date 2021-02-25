#include <iostream>
#include "Queue.h"


Queue::Queue() {
	std::cout << "initilize stack.." << std::endl;
}

void Queue::enqueue(int val) {
	if(rear == n-1){
		std::cout << "Stack overflow" << std::endl;
	}
	else {
		rear ++;
		queue[rear] = val;
	
	}
}


void Queue::dequeue() {
	if(front > rear){
		std::cout <<"Queue underflow" << std::endl;
	}
	else {
		front ++;
	}	
}

void Queue::peek() {
	if(front > rear) {
		std::cout << "Queue empty" << std::endl;
	}
	else {
		std::cout << queue[front] << std::endl;
	}
}

void Queue::str() {
	if(front > rear) {
		std::cout<<"Queue empty" << std::endl;
	}
	else {
		for(int i= front; i <= rear; i++) {
			std::cout <<queue[i]<<" " << std::endl;
		}
	}

}


