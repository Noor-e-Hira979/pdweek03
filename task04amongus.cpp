#include<iostream>
using namespace std;
main(){
cout<<"Enter Imposter Count: ";
float imposters;
cin>>imposters;
cout<<"Enter the Player Count: ";
int player;
cin>>player;
float chance;
chance=imposters/player;
int ans;
ans=chance*100;
cout<<"Chance of being an imposter: "<<ans <<"%";
}