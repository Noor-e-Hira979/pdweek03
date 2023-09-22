#include<iostream>
using namespace std;
main(){
cout<<"Number of Minutes: ";
int minutes;
cin>>minutes;
cout<<"Frames per Second: ";
int sec;
cin>>sec;
int formula;
formula =minutes*sec*60;
cout<<"Total Number of Frames: "<<formula ;
}
