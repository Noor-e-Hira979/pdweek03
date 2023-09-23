#include<iostream>
using namespace std;
main(){
int n;
cout<<"Enter a 5-digit number: ";
cin>>n;
int mod;
mod=n % 10;
int modu;
modu=n/10;
int modul;
modul=modu%10;
int modulu;
modulu=modu/10;
int modulus;
modulus=modulu%10;
int moduluss;
moduluss=modulu/10;
int modulusss;
modulusss=moduluss%10;
int modulussss;
modulussss=moduluss/10;
float ans;
ans=mod+modul+modulus+modulusss+modulussss;
cout<<"Sum of the individual digits is: "<<ans;
}
