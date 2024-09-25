#include<iostream>
using namespace std;
// Ques. 9  Write a program which accept temperature in Fahrenheit and 
//print it in centigrade
int main(){
float centigrade;
float fahrenheit;
cout<<"Enter temp. in Fahrenheit: ";
cin>>fahrenheit;
cout<<endl;
centigrade = (fahrenheit - 32) * 5/9;
cout<<"Temp. in Celsius: "<<centigrade;

}  