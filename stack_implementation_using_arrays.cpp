#include<bits/stdc++.h>

using namespace std;
#define MAX 10000
//trying to code stack for the forth time.

class Stack{
	int top;
	public:
	int a[MAX];
	Stack(){top = -1;}
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
	bool isFull();
};
bool Stack::push(int x)
{
	if(top >=(MAX - 1)){
		cout << "Stack Overflow\n";
		return false;
	}
	else{
		a[++top] = x;
		cout << x << " pushed into the stack.\n";
		return true;
	}
}
int  Stack::pop()
{
	if(top < 0){
		cout << "Stack Underflow\n";
		return 0;
	}
	else{
		int x = a[top--];
		return x;
	}
}
int Stack::peek()
{
	if(top < 0){
		cout << "Stack is empty\n";
		return 0;
	}
	else
		return a[top];
}
bool Stack::isEmpty()
{
	if(top < 0)
		return true;
	else 
		return false;
}
bool Stack::isFull(){
	if(top == (MAX - 1))
		return true;
	else 
		return false;
}	
int main()
{
	class Stack s;
	s.push(10);
    s.push(20);
    s.push(30);
        cout << s.pop() << " Popped from stack\n";
        //print all elements in stack :
        cout<<"Elements present in stack : ";
        while(!s.isEmpty())
        {
            // print top element in stack
            cout<<s.peek()<<" ";
            // remove top element in stack
            s.pop();
        }
        cout << "\nChecking if the stack is empty or not. " << s.isEmpty();
		cout << "\nChecking if the stack is full or not. " << s.isFull();
	return 0;
}
