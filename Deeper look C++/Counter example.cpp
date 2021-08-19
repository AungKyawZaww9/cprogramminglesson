#include<iostream>
using namespace std;

class Counter
{
	private:
		unsigned int count;
		
	public:
		Counter() : count(0)
		{  }
	void inc_count()
	{
		count++;
	}
	int get_count()
	{
		return count;
	}
	
};

int main()

{
	Counter C1, C2,C3;
	
	cout<<"\nc1 :"<< C1.get_count();
	cout<<"\nc2 :"<< C2.get_count();
	cout<<"\nc2 :"<< C3.get_count();
	
	C1.inc_count();
	C2.inc_count();
	C2.inc_count();
	C3.inc_count();

	cout<<"\nA1 :"<<C1.get_count();
	cout<<"\nA2 :"<<C2.get_count();	
	cout<<"\nA2:"<<C3.get_count();
	
	
	
	return 0;
}

