#include<iostream>
using namespace std;
main(){
cout<<"Enter the person's age: ";
int age;
cin>>age;
cout<<"Enter the number of times they've moves: ";
int moved;
cin>>moved;
int yrs;
yrs=moved+1;
int avg;
avg=age/yrs;
cout<<"Average number of years lived in the same house: "<<avg;
}