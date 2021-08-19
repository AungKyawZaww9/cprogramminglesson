#include<iostream>
using namespace std;

class foo
{
	private:
		static int count;
		
	public:
		foo()
		{
			count++;
		}
		
	int getcount()
	{
		return count;
	}
		
};

int foo::count = 2; // if 0 Ans: = 4 because (count is) object wrote four
 		// if 4 Ans:  = 8;

int main()
{
	foo f1, f2, f3, f4;
	
	cout << "count is :" << f1.getcount() <<endl;
	cout << "count is :" << f2.getcount() <<endl;
	cout << "count is :" << f3.getcount() <<endl;
	cout << "count is :" << f4.getcount() <<endl;
	return 0;	
	
 } 

