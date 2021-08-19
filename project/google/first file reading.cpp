#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ifstream MyReadFile("filename.txt");
	string mytext;
	while (getline (MyReadFile,mytext))
 {
 
 	cout << mytext;
 }
 
  MyReadFile.close();
}
