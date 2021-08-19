#include<iostream>
#include<conio.h>
using namespace std;

class Distance
{
	private:
		int feet;
		float inches;
	
	public:
		Distance() : feet(0), inches(0.0)
		{}
		
		Distance(int ft, float in): feet(ft),  inches(in)
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
		Distance add_dist(const Distance&) const;
};
Distance Distance::add_dist(const Distance& d2) const
	{
		Distance temp;
		temp.inches = inches + d2.inches;
		if(temp.inches >= 12.0)
		{
			temp.inches -= 12.0;
			temp.feet = 1;
		}
		temp.feet += feet + d2.feet;
		return temp;
	} 

int main()
{
	
	Distance D1, D3;
	Distance D2(11, 22.1);
	
	D1.getdist();
	D3 = D1.add_dist(D2); //D3 = D1+ D2;
	
	
	cout << "\nDist 1 : "; D1.showdist();
	cout << "\nDist 2 : "; D2.showdist();
	cout << "\nDist 3 : "; D3.showdist(); 
	
	
	getch();
	return 0;
}

