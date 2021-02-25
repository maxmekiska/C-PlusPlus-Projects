class Stack {
	private:
		int stack[100];
		int n = 100;
		int top = -1;
	public:
		Stack();
		void push(int val);
		void pop();
		void str();
};
