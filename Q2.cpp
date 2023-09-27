#include<iostream>
using namespace std ;
int main () {
int marks;
cin>>marks;
    

if(marks>90){
    cout<<"Excellent";

}
if(80<marks<=90){
    cout<<"Good";
}
if(70<marks<=80){
    cout<<"Fair";

}
if(60<marks<=70){
    cout<<"meets expectations";

}else{
    cout<<"below par ";
}
    return 0 ;
}
