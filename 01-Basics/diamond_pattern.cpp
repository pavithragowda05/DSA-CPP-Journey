//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;

void diamond(int n){

    // Upper Pyramid
    for(int i = 1; i <= n; i++){

        // spaces
        for(int j = 0; j < n - i; j++){
            cout << " ";
        }

        // stars
        for(int j = 0; j < (2*i - 1); j++){
            cout << "*";
        }

        cout << endl;
    }

    // Lower Pyramid
    for(int i = n - 1; i >= 1; i--){

        // spaces
        for(int j = 0; j < n - i; j++){
            cout << " ";
        }

        // stars
        for(int j = 0; j < (2*i - 1); j++){
            cout << "*";
        }

        cout << endl;
    }
}

int main(){

    int n;
    cin >> n;

    diamond(n);

    return 0;
}
