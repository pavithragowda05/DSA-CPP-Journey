// Check Prime Number
#include <iostream>
using namespace std;
bool isprime(int n){
        int flag=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
            return true;
        return false;    
    }
int main(){
    int n;
    cin>>n;
    if(isprime(n))
        cout<<"prime number!";
    else
        cout<<"non prime number";

    return 0;
}
