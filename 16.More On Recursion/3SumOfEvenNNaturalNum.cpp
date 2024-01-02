#include<iostream>
using namespace std;
int sumEven(int n)
{
    if(n>0)
    {
        return 2*n+sumEven(n-1);
    }
}
int main() {
int n;
cout<<"Enter value of n: ";
cin>>n;
cout<<"Sum of even natural numbers are : "<<sumEven(n);
return 0;
}