#include<iostream>
#include<conio.h>
using namespace std;

class Distance
{
	private:
		int feet;
		float inches;
		
		
	public:
		Distance(): feet(0), inches(0.0)
		{}
	
		Distance(int ft, float in): feet(ft), inches(in)
		{}
	
	void getdist()
	{
		cout << "\nEnter feet :";
		cin >> feet;
		cout<< "\nEnter inches :";
		cin >> inches;
	}
	void showdist()
	{
		cout<< feet << "\'" << inches << "\"";
	}
	Distance add_dist(Distance);
	
};

Distance Distance::add_dist(Distance D2)
{
	Distance temp;
	temp.inches = inches + D2.inches;
	if(temp.inches >= 12.0)
	{
		temp.inches -= 12.0;
		temp.feet ++;
	}
	temp.feet += feet + D2.feet;
	
	return temp;
 } 

 int main()
 
 {
 	Distance Dist1, Dist3;
 	Distance Dist2(11, 2.22);
 	
 	Dist1.getdist();
 	
	Dist3 = Dist1.add_dist(Dist2);
	
	cout << "\nDD1 = "; Dist1.showdist();
	cout << "\nDD2 = "; Dist2.showdist();
	cout << "\nDD3 = "; Dist3.showdist();
	
	getch();
	return 0;
 	
 }
 
 
