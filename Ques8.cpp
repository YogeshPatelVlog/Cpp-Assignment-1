#include<iostream>
using namespace std;
// Ques. 8  Write a C++ program to input marks of five subjects of a 
// student and calculate total marks and percentage.
int main(){
int a, b,c,d,e; 
float percentage;
cout << "Enter your first subjects marks  :"<< endl;
cin >> a;
cout << "Enter your second subjects marks : "<< endl;
cin >> b;
cout << "Enter your third  subjects marks : "<< endl;
cin >> c;
cout << "Enter your fourth subjects marks : "<< endl;
cin>> d;
cout << "Enter your fifth subjects marks : "<< endl;
cin >> e;
 float total = a + b + c + d + e;
 cout << " Your total marks is : "<< total << endl;
 percentage = (total *100)/500;
 cout <<"Your percentage is : "<< percentage<<endl;


}  