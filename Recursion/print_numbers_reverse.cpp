#include <iostream>
using namespace std;

class Solution {
  public:
  
    // Recursive function to print numbers from n to 1
    void printNumbers(int n) {
        if(n <= 0) return;
        
        cout << n << endl;
        
        printNumbers(n - 1);
    }
};
