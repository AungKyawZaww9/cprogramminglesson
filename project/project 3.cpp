#include <iostream> 
#include <string> 
#include <conio.h>
using namespace std; 
  
int main() 
{ 
  
    getch();
    char y,n;
    char name[50]; 
    char adress[50];
    char NRC[50];
    string str1 = "Welcome to Yangon"; 
  
    
    string str2("Where do you wanna go?"); 
    string str3("Please enter (East, West, North or South) ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    cout << "Enter :";
    cin >> str3;
    
    if(str3 == "East")
    {
    	
		
		cout << "\nLayDownkan Hospital";
    //	cout << "\nDagon Seikkan Newtownship", "\nNo.2 Main street road ", "\nlayDountkan";
    	cout << endl;
	     
		char *place[10] = { "Dagon Seikkan Newtownship", "No.2 Main street road ", "layDountkan"}; // Initialize array of pointer
	  
	    
	    for (int i = 0; i < 4; i++) // Printing Strings stored in 2D array 
		cout << place[i] << "\n"; 
	       
		cout << "Do you wanna voking(yes,no)";
	    cin >> n;
	       if( n== 'y')
		   {
		   	cout <<"..";
	       	cout << "\nEnter Your Name::"; 
		    cin.getline(name, 50); 
		    cout << "\nEnter your adress ::";
		    cin.getline(adress,50);
		    cout << "\nEnter your NRc ::";
		    cin.getline(NRC,50);
		  
	  
		    cout << "\nYour Name is:: " << name; 
		    cout << "\nYour adress is:: " << adress; 
		    cout << "\nYour NRC is:: " << NRC; 
	       	
		   }
		   else
		   {
		   	cout << "wrong";
		   }
	    	        
    }
    else
	{
	
	    cout << "wrong";
	  }
	  
	  
    return 0; 
} 












