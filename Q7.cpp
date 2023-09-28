#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int num1, num2;
    cin >> num1 >> num2;


//LCM
int maximum = max(num1 , num2);

int minimum = min(num1 , num2);
int LCM;

    for (int j = maximum ;j<100 ; j +=maximum) {
        if (j % minimum  == 0){
            LCM = j;
          
        }
         
    }  
    cout<<"LCM IS "<<LCM<<endl;  
//GCD
int gcd;

for (int i = 1; i <=  maximum; ++i) {
    if (minimum % i == 0 && maximum% i ==0) {
      gcd = i;
      
    }
}
cout<<"gcd is "<<gcd<<endl;
return 0;
}
