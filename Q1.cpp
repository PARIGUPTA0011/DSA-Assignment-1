//  Q1 print Z
#include<iostream>
using namespace std ;
int main() {


  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=5;j++)
     if (i==1||i==5||j==6-i)
     {
        cout<<"*";
     }
  else{
    cout<<" ";
  }
   cout<<endl;
    }





    return 0 ;
}
