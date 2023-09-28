#include <iostream>
using namespace std;

int main(){
int n;
  cin >> n;

    int a = 0;

   
    cout << "\n";

    for (int i = 1; n > 0; i++) {
        a = n % 10;
        cout << a<<endl;
        n = n / 10;
    }

    return 0;
}
