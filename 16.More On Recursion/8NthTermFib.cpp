#include <iostream>
using namespace std;
int nthFib(int n)
{
    if(n==1 ||n==0)
        return n;
    return nthFib(n-1)+nthFib(n-2);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0)
        cout << "please enter valid number";
    else
    {
        cout << "Nth term fibonacci number is "<<nthFib(n);
    }
    return 0;
}