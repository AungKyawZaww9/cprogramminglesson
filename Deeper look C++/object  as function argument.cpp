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
		Distance(int ft, float in) : feet(ft), inches(in)
		{	}
	
	void getdist()
	{
		cout<<"\nEnter feet";
		cin>>feet;
		cout<<"\nEnter inches";
		cin>>inches;
	}
	
	void showdist()
	{
		cout << feet<< "\'" << inches << "\"";
	}			
	
	void add_dist (Distance , Distance);
};

void Distance:: add_dist(Distance d2, Distance d3)
{
	inches = d2.inches + d3.inches;
	feet = 0;
	
	if(inches >= 12.0)
	{
		inches -= 12.0;
		feet++;
	}
	feet += d2.feet + d3.feet;
}

int main()
{
	Distance D1, D3;
	Distance D2(11, 6.24);
	
	D1.getdist();
	D3.add_dist(D1,D2);
	
	cout<<"\nDist1 = "; D1.showdist();
	cout<<"\nDist2 = "; D2.showdist();
	cout<<"\nDist3 = "; D3.showdist();
	return 0;
}





