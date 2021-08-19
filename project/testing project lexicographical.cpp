#include <iostream>
using namespace std;

int main()
{
    string str[2], temp;

    cout << "Enter 10 words: " << endl;
    
    for(int i = 0; i < 2; ++i)
    {
      getline(cin, str[i]);
    }

    for(int i = 0; i < 1; ++i)
       for( int j = i+1; j < 2; ++j)
       {
          if(str[i] > str[j])
          {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
          }
    }

    cout << "In lexicographical order: " << endl;

    for(int i = 0; i < 10; ++i)
    {
       cout << str[i] << endl;
    }
    return 0;
}




