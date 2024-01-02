#include <iostream>
using namespace std;
void decToBin(int n)
{
    if (n > 0)
    {
        decToBin(n / 2);
        cout << n % 2;
    }
}
int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    if (n < 1)
        cout << "Please enter positive number greater than 0";
    else
    {
        cout << "Your number in binary is: ";
        decToBin(n);
    }
    return 0;
}