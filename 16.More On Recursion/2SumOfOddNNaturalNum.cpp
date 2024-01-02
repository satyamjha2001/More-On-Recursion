#include<iostream>
using namespace std;
int sumOdd(int n)
{
    if(n>0)
    {
        return 2*n-1+sumOdd(n-1);
    }
}
int main() {
int n;
cout<<"Enter value of n: ";
cin>>n;
cout<<"Sum of odd natural numbers are : "<<sumOdd(n);
return 0;
}