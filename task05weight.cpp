#include<iostream>
using namespace std;
main(){
cout<<"Enter the name of the Person: ";
string name;
cin>>name;
cout<<"Enter the target weight loss in kilograms: ";
int target;
cin>>target;
int days;
days=target*15;
cout<<name<<" will need "<<days <<" days to lose "<<target<<" kg of weight by following doctor's suggestions ";
}
