#include<iostream>
using namespace std;
int fact(int n)
{
    if(n<0)
      {  cout<<"Please enter positive number.";
        return 0;
      }
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int main() {
int n;
cout<<"Enter value of n: ";
cin>>n;
if(fact(n))
    cout<<"Factorial of a number is : "<<fact(n);
return 0;
}