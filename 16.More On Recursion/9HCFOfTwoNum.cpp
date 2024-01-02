#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a>>b;
    if (a < 0 || b<0)
        cout << "please enter valid number";
    else
    {
        cout << "HCF of two numbers is "<<gcd(a,b);
    }
    return 0;
}