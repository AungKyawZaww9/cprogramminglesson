#include <iostream> 
using namespace std; 
  
int main() 
{ 
    char name[20]; 
    char adress[50];
    char NRC[50];
    
    cin.get();
    
    cout << "\nEnter Your Name::"; 
    cin.getline(name, 20); 
    cout << "\nEnter your adress ::";
    cin.getline(adress,50);
    cout << "\nEnter your NRc ::";
    cin.getline(NRC,50);
  
    
    
  
    cout << "\nYour Name is:: " << name; 
    cout << "\nYour adress is:: " << adress; 
    cout << "\nYour NRC is:: " << NRC; 
    return 0; 
} 
