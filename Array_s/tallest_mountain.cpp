#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        int mountain_height;
        int highest = 0;

        for (int i = 0; i < n; i++) {
            cin >> mountain_height;

            if (mountain_height > highest) {
                highest = mountain_height;
            }
        }

        cout << highest << endl;
    }

    return 0;
}
