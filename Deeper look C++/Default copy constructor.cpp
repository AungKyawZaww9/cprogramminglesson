#include<iostream>
using namespace std;

class Distance

{
	private:
		int feet;
		float inches;
		
	public:
		Distance() : feet(0), inches(0.0)
		{	}
		
		Distance(int ft, float in): feet(ft),inches(in)
		{	}
		
		void getdist()
		{
			cout<<"\nEnter feet: ";
			cin>>feet;
			cout<<"\nEnter inches: ";
			cin>>inches;
			
		}
		
		void showdist()
		{
			cout << feet << "\'" << inches <<"\"";
		}
	
};

int main()
{
	Distance D1(1, 1.0);
	Distance D2(D1);
	Distance D3 = D1;
	
	cout << "\nDist 1 = ";
	D1.showdist();
	cout << "\nDist 2 = ";
	D2.showdist();
	cout << "\nDist 3 = ";
	D3.showdist();
	
	return 0;
}
