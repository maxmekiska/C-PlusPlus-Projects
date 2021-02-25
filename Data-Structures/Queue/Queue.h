class Queue {
	private:
		int queue[100];
		int n = 100;
		int front = 0;
		int rear = -1;
	public:
		Queue();
		void enqueue(int val);
		void dequeue();
		void peek();
		void str();


};
