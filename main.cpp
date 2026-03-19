// Complete the following program.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double power;
    double result = 1.0;
    cout << "Enter the power number: ";
    cin >> power;
    cout << fixed << setprecision(5);
    
    if (power >= 0)
    {
        for (int i=0;i<=power;i++)
        {
            cout << result << " " ;
            result = result*2;
        }
        cout << endl;
    }
    else
    {
        for (int i=0;i>=power;i--)
        {
            cout << result << " ";
            result = result/2;
        }
        cout << endl;
    }
}
    // TODO: declare variable n for the exponent input

    // TODO: read n from standard input

    // TODO: compute 2 to the power of n using a loop (no cmath pow)
    // For positive n: multiply result by 2, n times
    // For negative n: divide result by 2, |n| times
