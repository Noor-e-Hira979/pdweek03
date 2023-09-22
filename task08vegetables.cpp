#include<iostream>
using namespace std;
main(){
cout<<"Enter vegetable price per kilogram (in coins): ";
float price;
cin>> price;
cout<<"Enter fruits per kilogram (in coins): ";
float fruits;
cin>>fruits;
cout<<"Enter total kilograms of vegetables: ";
int kg;
cin>>kg;
cout<<"Enter total kilograms of fruits: ";
int kgs;
cin>>kgs;
int earnings;
earnings=(price*kg)+(fruits*kgs);
int total;
total=earnings/1.94;
cout<<"Total earnings in Rupees (Rps): "<<total;
}
