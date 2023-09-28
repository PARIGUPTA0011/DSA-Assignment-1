#include <iostream>
using namespace std;

int main(){
    int i, j;
    

    cout << "Enter a number: ";
    cin >> j;
    
    for (i = 0; j > 0; i++){
        j = j / 10;
    }
    
   
    cout << "Total no. of digits " << i << endl;
    return 0;
}
