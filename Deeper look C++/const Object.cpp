#include<iostream>
using namespace std;

class Distance
{
		private:
		int feet;
		float inches;
	public:
		Distance(int ft, float in) : feet(ft), inches(in)
		{}
		
		void getdist()
		{
			cout << "\nEnter feet :";
			cin >> feet;
			cout << "\nEnter inches :";
			cin >> inches;
		}
		void showdist() const
		{
			cout << feet << "\'" << inches << "\"";
		}
};

int main()
{

	const Distance B(300, 0);
	const Distance C(300, 999);
	cout << "Foot ball :";	B.showdist();
	cout << "\nFoot ball 1 :";	C.showdist();



	return 0;
}
