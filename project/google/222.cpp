#include <iostream>
using namespace std;
int main() {
   int sea, c, n=6;
   int arr[] = { 12, 35, 69, 74, 165, 54};
   sea=165;
   for (c = 0; c < n; c++) {
      if (arr[c] == sea) {
         printf("\t%d is present at location %d.\n",  c+1);
         break;
      }
   }
   if (c == n)
      printf("/t%d isn't present in the array.\n");
   return 0;
}
