#include <iostream>
using namespace std;
int main() {
    int low, high;

    
    cin >> low;
   
    cin >> high;

    cout  << low << high  << endl;

    
    for (int j = low; j <= high; ++j) {
        if (j <= 1) {
            continue;  
        }
        bool isPrime = true;
        for (int i = 2; i * i <= j; ++i) {
            if (j % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
          cout <<j << " ";
        }
    }

    cout <<endl;

    return 0;
}
