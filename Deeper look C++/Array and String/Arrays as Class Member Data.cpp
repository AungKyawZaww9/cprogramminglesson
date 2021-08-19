#include<iostream>
using namespace std;
class stack
{
	private:
		enum {Max = 10
		};
		int st[Max];
		int  top;
	
	public:
		stack()
		{
			top = 0;
		}
		void push(int var)
		{
			st[++top] = var;
		}
		int pop()
		{
			return st[top--];
		}
};

int main()
{
	stack s1;
	
	s1.push(11);
	s1.push(22);
	s1.push(10);
	cout << "\n1: " << s1.pop();
	cout << "\n2:" << s1.pop();
	
	
	
	cout << "\n3: " << s1.pop();
	
	return 0;
}

