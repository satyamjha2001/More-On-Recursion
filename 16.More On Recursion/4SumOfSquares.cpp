#include<iostream>
using namespace std;
int sumSquares(int n)
{
    if(n>0)
    {
        return n*n+sumSquares(n-1);
    }
}
int main() {
int n;
cout<<"Enter value of n: ";
cin>>n;
cout<<"Sum of Squares of natural numbers are : "<<sumSquares(n);
return 0;
}