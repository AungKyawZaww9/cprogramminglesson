// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;
 

int main () 
{
	char s;
	string str1, str2, str3;
	ofstream myfile ("example.txt");
	ofstream yourfile("yong.txt");
  if (myfile.is_open())
  {
  	
  	if(true == myfile.is_open())
  	{
  		  
    myfile << "\n\t\t\t\t  Welcome to Mandalay"<< endl;
    myfile << "\n\t\t\t\tWhere do you wanna go?";
    myfile << "\nPlease enter (East_District, West_District, North_District or South_District) ";
    }
    else 
    {
    	myfile << "wrong";
	}
    myfile.close();
  }
  
  
  else cout << "Unable to open file";
  
  if(yourfile.is_open())
  {
  	yourfile << "\nNaing Hospital";
	yourfile << "\nEast Dagon Township";
	yourfile << "\nNo.2 Main street road ";
	yourfile << "\nlayDountkan";
	yourfile << endl;
  }
  yourfile.close();
  return 0;
}


