#include<iostream>
using namespace std;
// Ques. 3 input three number and calculate total and average 
int main(){
int a,b,c;
cout << "Enter your first number : "<< endl;
cin >> a;
cout <<" Enter your second number : " << endl;
cin >> b;
cout << "Enter third number : " << endl;
cin >> c;
int total = a + b + c;
cout << "Your total is : " << total<<"";
float average  = (a + b + c)/3;
cout << "\nYour average is : " <<average;

}