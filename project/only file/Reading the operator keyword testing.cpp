// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include<conio.h>
using namespace std;

int main ()
 {
char yellow , oo;
  string line;
  string kk;
  ifstream myfile ("example.txt");
  ifstream yourfile("yong.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    	
    	
    	cout << line << '\n';	
    	
    	
    }
    cout << "What is your name :";
    myfile.close();
  }

  else cout << "Unable to open file"; 
  
  if(yourfile.is_open())
	{
		while(getline(yourfile,kk))
		{
		
			 cout << kk << endl;
			
		
		}
		cout << "Choice :";
    	cin >> yellow;
    	
    	if(yellow == 'a')
    	{
    		int day;
			cout << "ENter number :";
			cin >> day;
	 

		switch (day) {
		  case 1:
		    cout << "Monday";
		    break;
		  case 2:
		    cout << "Tuesday";
		    break;
		  case 3:
		    cout << "Wednesday";
		    break;
		  case 4:
		    cout << "Thursday";
		    break;
		  case 5:
		    cout << "Friday";
		    break;
		  case 6:
		    cout << "Saturday";
		    break;
		  case 7:
		    cout << "Sunday";
		    break;
		}
		}
	
		
		
		myfile.close();
	}
  return 0;
}
