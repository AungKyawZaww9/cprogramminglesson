#include<iostream>
using namespace std;

class part
{
	private:
		int modelnumber;
		int partnumber;
		float cost;
		
	public:
	

		void setpart(int mn, int pn, float c)
		{
		modelnumber = mn;
		partnumber = pn;
		cost = c;	
		}	


void showpart()
{
	cout<<"\nModel "<<modelnumber;
	cout<<"\nPart "<<partnumber;
	cout<<"\nCost $ "<<cost<<endl;
}

};
int main()
{
	part part1;
	part1.setpart(444, 55, 68.9);
	part1.showpart();
	
	return 0;
	
}
