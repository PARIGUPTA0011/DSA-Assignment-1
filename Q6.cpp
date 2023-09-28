#include <iostream>

using namespace std;

int main()
{
    int n;
    int a = 0;

    cout << "Enter a number: ";
    cin >> n;
    cout << "\n";

    for (int i = 1; n > 0; i++) {
        a = n % 10;
        cout << a <<endl;
        n = n / 10;
    }

    return 0;
}
