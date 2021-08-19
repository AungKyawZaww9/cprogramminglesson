#include<iostream>
#include<conio.h>
using namespace std;


class book
{
	private:
		int page;
		
	
	public:
		book() : page(0)
		{cout << "\nGG";}
	void inc_page()
	{
		page ++;
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
	
	b1.inc_page();
	b2.inc_page();
	b2.inc_page();
	
	cout << "\nPg 1:"; b1.get_page();
	cout << "\nPg 2:"; b2.get_page();
	
	
	getch();
	return 0;
}
