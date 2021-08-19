#include<iostream>
using namespace std;

class book
{
	private:
	unsigned int page;
		
	
	public:
		book() : page(0)
		{}
	void inc_page()
	{
		page++;
	}
	int get_page()
	{
		return page;
	}
	
};
int main()
{
	book b1,b2,b3;
	
	cout << "\nPage 1:"; b1.get_page();
	cout << "\nPage 2:"; b2.get_page();
	cout << "\nPage 2:"; b3.get_page();
	
	b1.inc_page();
	b2.inc_page();
	b2.inc_page();
	
	cout << "\nPg 1:"; b1.get_page();
	cout << "\nPg 2:"; b2.get_page();
	cout << "\nPg 2:"; b3.get_page();
	
	
	
	return 0;
}
