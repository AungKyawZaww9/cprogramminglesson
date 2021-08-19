#include<iostream>
#include<cstring>
using namespace std;


class String
{
	private:
		enum {sz = 80};
		char str[sz];
	public:
		String()
		{str [0] = '0';}
		
		String (char s[])
		{strcpy (str,s);}
		
		void concat (string s2)
		{
			if(strlen(str) + strlen(s2.str) < sz)
			strcat(str, s2.str);
			
			else
			cout << "\nsstring too long";
			}
	};

int main()
{
	String s1(Merry );
	String s2 = "season's greeting ";
	String s3;
	
	
	cout << "\n S1"; s1.display();
	cout << "\ns2"; s2.display();
	cout << "\nS3"; s3.display();
	
	s3 = s1;
	cout << "\ns3="; s3.display();
	
	s3.concat(s2);
	
	cout << "\ns3:"; s3.display();
	cout <<endl;

	
	
	
	return 0;}

