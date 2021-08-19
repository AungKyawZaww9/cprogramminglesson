//The operator keyword

#include<iostream>
using namespace std;

class counter
{
	private:
		unsigned int count;
	public:
		counter():count(0)
		{	}
		
		unsigned int get_count()
			{return count;}
			
		void operator ++()
			{
				++count;		
			}
	
	};
	
	int main()
	{
		counter c1,c2;
		
		cout << "\nC1 = " << c1.get_count();
		cout << "\nC2 = " << c2.get_count();
		
		++c1;
		++c2;
	//	c2 = ++c1;
		
		cout << "\nCC1 = " << c1.get_count();
		cout << "\nCC2 = " << c2.get_count();
		
		return 0;
		}

