#include<iostream>
using namespace std;
main(){
cout<<"Number of square metres you can paint: ";
int square;
cin>>square;
cout<<"Width of the single wall (in meters): ";
int width;
cin>>width;
cout<<"Height of the single wall(in meters): ";
int height;
cin>>height;
int area;
area=width*height;
int number;
number=square/area;
cout<<"Number of walls you can paint: "<<number;
}