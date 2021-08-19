#include<iostream>
#include<string>
using namespace std;
class Counter
{
	protected:
		unsigned int count;
	public:
		Counter() : count(0)
		{}
		Counter(int c) : count(c)
		{}
		unsigned int get_count()
		{ return count; }
		Counter operator++ ()
		{ return Counter(++count); }
		
	};
	class CountK: public Counter
	{
		public:
			CountK() :Counter()
			{}
			CountK(int c): Counter(c)
			{}
			CountK operator-- ()
			{return CountK(--count);}
		
		};
	int main()
		{
			CountK c1;
			CountK c2(100);
			cout << "\nC1 = " << c1.get_count();
			cout << "\nC2 =" << c2.get_count();
			
			++c1;
			++c1;
			++c1;
			
			cout << "\nCC11 = " << c1.get_count();
			
			--c2;
			--c2;
			cout << "\nCCC2 = " << c2.get_count();
			CountK c3 = --c2;
			cout << "\nC3 = " << c3.get_count();
			cout << endl;
			
			
			return 0;
			}
