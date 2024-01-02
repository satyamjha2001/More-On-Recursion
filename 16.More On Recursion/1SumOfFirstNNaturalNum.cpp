#include<iostream>
using namespace std;
int sumN(int n)
{
    if(n>0)
    {
        return n+sumN(n-1);
    }
}
int main() {
int n;
cout<<"Enter value of n: ";
cin>>n;
cout<<"Sum of natural numbers are : "<<sumN(n);
return 0;
}