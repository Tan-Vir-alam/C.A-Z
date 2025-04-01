/*Write a program to compare two numbers and print whether the first number is greater than,
less then, or equal to the second number using relational operators(<,>,==).
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter the 1st number: ";
  cin>>a;
  cout<<"Enter the 2nd number: ";
  cin>>b;

  if(a>b){
    cout<<a<<" is greater than "<<b<<"\n";
  }
  else if(a<b){
    cout<<b<<" is greater than "<<a<<"\n";
  }
  else{
    cout<<"Both are equal.\n";
  }
}
