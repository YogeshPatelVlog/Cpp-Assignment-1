#include<iostream>
using namespace std;
// Ques. 5  Write a C++ program to find simple interest. SI = (P*R*N)/100
// With float values
int main(){
int p,r,n;
float si;
cout << "Enter your p : "<< endl;
cin >> p;
cout << "Enter your r : " << endl;
cin >> r;
cout << "Enter your n : "<< endl;
cin >> n;
 si = (p*r*n)/100;
cout << "\nYour SI is  : " << si;

}