#include <iostream>
using namespace std;
long double Power(long double x,long double y)
{
    if(y==0)
        return 1;
    if(y>=0)
    {
        return x*Power(x,y-1);
    }
    else
    {
        return 1/x*Power(x,y+1);
    }
}
int main()
{
    long double x,y;
    cout << "Enter two numbers: ";
    cin >> x>>y;
    cout << "X to power Y is: "<<Power(x,y);
    return 0;
}