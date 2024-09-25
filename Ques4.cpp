#include<iostream>
using namespace std;
// Ques. 4 Write a C++ program to enter Day Temperature of 5 cities of 
// Gujarat. Display average temperature.
int main(){
int a,b,c,d,e;
cout << "Enter day temperature : "<< endl;
cin >> a;
cin >> b;
cin >>c;
cin >> d;
cin >> e;
float average  = (a + b + c+ d + e)/5 ;
cout << "\nYour average  temperature. s : " <<average;

}