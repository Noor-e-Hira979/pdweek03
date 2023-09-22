#include<iostream>
using namespace std;
main(){
cout<<"Enter the size of the fertilizer bag in pounds: ";
int size;
cin>>size;
cout<<"Enter the cost of the bag: $";
int cost;
cin>>cost;
cout<<"Enter the area in square feet that can be covered by the bag: ";
int area;
cin>>area;
int pound;
pound=cost/size;
cout<<"Cost of fertilizer per pound: $"<<pound <<endl;
int fertilizing;
fertilizing=size*area;
cout<<"Cost of fertilizing per square foot: $"<<fertilizing;
}

