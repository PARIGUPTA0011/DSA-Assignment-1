#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter a number ";
        cin >> n;

        bool isPrime = true;

        if (n <= 1) {
            isPrime = false;
        } else if (n <= 3) {
            isPrime = true;
        } else if (n % 2 == 0 || n % 3 == 0) {
            isPrime = false;
        } else {
            for (int j = 5; j * j <= n; j += 6) {
                if (n % j == 0 || n % (j + 2) == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            cout << "prime" << endl;
        } else {
            cout << "not prime" << endl;
        }
    }

    return 0;
}
