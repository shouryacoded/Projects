// The following program depicts implementation of c++ along with some funtions of the same.
#include<iostream>
using namespace std;
#define SIZE 10
class Queue{
	private:
		int items[SIZE], front, rear;
	public:
		Queue(){
			front = -1; rear = -1;
		}
		bool isFull();
		bool isEmpty();
		void enQueue(int element);
		int deQueue();
		void Display();
};
bool Queue::isFull()
{
	if(front == 0 && rear == SIZE - 1)
	return true;
	else 
	return false;
}
bool Queue :: isEmpty()
{
	if(front == -1 && rear == -1)
		return true;
	else 
		return false;
}
void Queue :: enQueue(int element)
{
	if(isFull())
		cout << "Queue is full, please remove before trying again\n";
	else 
	{
		if(front == -1)
			front = 1;
		rear++;
		items[rear] = element;
		cout << endl << "Inserted "<< element << endl;
	}
}
int Queue :: deQueue()
{
	int element;
	if(isEmpty())
	{
		cout << "Queue is empty" << endl;
		return (-1);
	}
	else 
	{
		element = items[front];
		if(front >= rear)
		{
			front = -1;
			rear = -1;
		}
		else {front++;}
		cout << endl << "Deleted ->  " << element << endl;
		return (element);
	}
}
void Queue :: Display()
{
	int i;
	if(isEmpty())
		cout << "The queue is empty " << endl;
	else
	{
		cout << "Front Index -> " << front << endl;
		cout << "Items -> ";
		for(i=front ;i<=rear;i++)
			cout << items[i] << " " ;
		cout << endl << "Rear Index -> " << rear << endl;
	}
}
int main()
{
	Queue q;
	q.deQueue();
	// The qbove call si not possible as there is currently no element in the queue.
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	q.enQueue(4);
	q.enQueue(5);
	q.enQueue(6);
	// The 6th element cannot be added as the queue is full now.	
	q.Display();
	q.deQueue();
	// The above line will remove 1 from the queue.
	// Let us check that by displayin again.
	q.deQueue();
	return 0;
}
