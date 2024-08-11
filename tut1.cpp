#include <iostream>
#include <vector>
using namespace std;

vector<int> memo(100, -1);

int static counter = 0;
int Fib(int n)
{
    counter++;
    if (memo[n] != -1)
    {
        return memo[n];
    }

    if (n == 1 || n == 0)
    {
        return n;
    }
    memo[n] = Fib(n - 1) + Fib(n - 2);
    return memo[n];
};

int main()
{
    int number;
    cout << "Enter A Positive Integer: ";
    cin >> number;
    int Result;
    Result = Fib(number);
    cout << "The Result of Sequence IS: " << Result << endl;
    cout << "Counter = " << counter << endl;
    return 0;
}