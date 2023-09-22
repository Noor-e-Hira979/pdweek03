#include<iostream>
using namespace std;
main(){
cout<<"Enter the movie name: ";
string name;
cin>>name;
cout<<"Enter the adult ticket price: $";
int adult;
cin>>adult;
cout<<"Enter the child ticket price: $";
int child;
cin>>child;
cout<<"Enter the number of adult tickets sold: ";
int sold;
cin>>sold;
cout<<"Enter the number of child tickets sold: ";
int solds;
cin>>solds;
cout<<"Enter the percentage of the amount to be donated to charity: ";
int charity;
cin>>charity;
cout<<"Movie: "<<name <<endl;
int generation;
generation=adult*sold+child*solds;
cout<<"Total amount generated from ticket sales: $"<<generation<<endl;
int donation;
donation=generation/charity;
cout<<"Donation to charity ($" <<charity <<"): "<<donation<<endl;
int amount;
amount=generation-donation;
cout<<"Remaining amount after donation: $"<<amount;
}

