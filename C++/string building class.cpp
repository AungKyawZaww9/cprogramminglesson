#include <iostream>
#include<cstring>
using  namespace std;

class part
{
	private:
		char partname [30];
		int partnumber;
		double cost;
	public:
		void setpart(char pname[], int pn, int c)
		{
			strcpy(partname, pname);
			pn = partnumber;
			cost = c;
		}	
		
		void showpart ()
		{
			cout << "\nName =" << partname;
			cout << ",  number :" << partnumber;
			cout << ",  cost :" << cost;
			}
};
	
	int main()
	{
		part part1, part2;
		
		part1.setpart("Handel bolt", 44,4.3);
		part2.setpart("stat level ", 99,19.2);
		
		cout << "\nfirst number "; part1.showpart();
		cout << "\nSecond number "; part2.showpart();
		cout << "\nThird number "; part2.showpart();
		
		
		return 0;
	}
