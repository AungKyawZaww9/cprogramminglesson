#include <bits/stdc++.h> 
using namespace std; 
class Back
{ 
     
    public: 
  
    string geekname; 
    char I[9];
  
    // Member Functions() 
    void printname() 
    { 
    string str1 = "Welcome to Yangon";   
    string str2("Where do you wanna go?"); 
    string str3("Please enter (East_District, West_District, North_District or South_District) ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    cout << "Enter :";
    cin >> str3;
    } 
    void kk()
    {
    	cout << "\nEnter ::";
    	cin >> I;
    	
    	cout << I;
	}
}; 
  
int main() { 
  
   
    Back obj1, obj2; 			 // Declare an object of class geeks 
  
     			
	obj1.printname();
	obj1.kk();

//	Back obj1;
//	cout << "good" << obj1.kk();
	
    
    return 0; 
    
} 
