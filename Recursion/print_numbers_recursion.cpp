// Recursive function to print numbers from 1 to N
class Solution {
  public:
    void printNumbers(int n) {
        if(n<1) return ;
        printNumbers(n-1);
        cout<<n<<endl;
        // Your code goes hnere
    }
};
