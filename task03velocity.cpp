#include<iostream>
using namespace std;
main(){
cout<<"Enter Initial Velocity (m/s): ";
int velocity;
cin>>velocity;
cout<<"Enter Acceleration (m/s^2): ";
int acceleration;
cin>>acceleration;
cout<<"Enter Time (s): ";
int seconds;
cin>>seconds;
int formula;
formula=acceleration*seconds;
int final;
final=formula+velocity;
cout<<"Final Velocity (m/s): "<<final;
}