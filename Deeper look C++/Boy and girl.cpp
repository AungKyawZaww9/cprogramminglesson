#include<iostream>
using namespace std;

class Person
{
	private:
		int boy;
		int girl;
		
	public:
		void setper(int b, int g)
		{
			boy = b;
			girl = g;
		}
	
	void getper()
	{
		cout << "\nEnter boy for number :";
		cin >> boy;
		cout << "\nEnter girl for number :";
		cin >> girl;
	}
	
	void showper()
	{
		cout << boy << "\tnumber" << girl << "\tnumber";
	}
	
};

int main()
{
	Person p1, p2;
	p2.setper(22,33);
	p1.getper();
	
	cout << "\nThe reusult B :"; p2.showper();
	cout << "\nThe result G :"; p2.showper();
	
	
	return 0;
}
