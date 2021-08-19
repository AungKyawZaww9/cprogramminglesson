#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	
	int i;
	int a;
	for(i=0; i<=5; i++){
		for(a=0; a<=i; a++){
			
			cout << "*";
		}	
		cout << endl;		
	}
	for(i=5; i>0; i--){
		for(a=0; a<i; a++){
			
			cout << "*";
		}	
		cout << endl;		
	}
	
	
	
//	string kyaw = "\nAung Kyaw Zaww";
//	
//	cout << kyaw;
//	
	
	
	return 0;
}
