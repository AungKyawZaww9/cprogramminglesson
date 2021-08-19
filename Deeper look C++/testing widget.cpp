#include<iostream>
using namespace std;

class Car
{
	private:
		int wheel;
		int  person;
	
	public:
		void setpart(int w, int p)
		{
			wheel = w;
			person  = p;
		}
	
	void showpart()
	{
		cout << "\nWheel number :" <<wheel;
		cout << "\nPerson number :" <<person;
	}
};

int main()
{
	Car C;
	C.setpart(2, 3);
	C.showpart();
	
	return 0;
}
