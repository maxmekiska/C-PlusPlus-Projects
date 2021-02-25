#include <iostream>
#include "Stack.h"


Stack::Stack() {
	std::cout << "initilize stack.." << std::endl;
}

void Stack::push(int val) {
	if(top >= n-1){
		std::cout << "Stack overflow" << std::endl;
	}
	else {
		top++;
		stack[top] = val;
	}
}


void Stack::pop() {
	if(top<=-1){
		std::cout <<"Stack underflow" << std::endl;
	}
	else {
		top --;
	}	
}

void Stack::str() {
	if(top>=0) {
		for(int i=top; i >=0; i--){
			std::cout <<stack[i] << std::endl;
		}
	}
	else {
		std::cout <<"Stack is empty";
	}
}


