#include<iostream>
using namespace std;

class Distance
{
	private:
		int feet;
		float inches;
		
	public:
		void setdist(int ft, float in)
		{
			feet = ft;
			inches = in;
		}
		
	void getdist()
	{
		cout << "\nEnter feet";
		cin>>feet;
		cout<<"\nEnter inches";
		cin>>inches;
	}
	
	void showdist()
	{
		cout<< feet << "\'-" <<inches<< "\'";
	}
};


int main()

{
	
	Distance d1,d2;
	
	d1.setdist(33, 44.5);
	d2.getdist();
	
	cout<<"\nDist1 = "; d1.showdist();
	cout<<"\nDist2 = "; d2.showdist();
	cout<<endl;
	
	
	
	return 0;
}
