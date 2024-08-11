#include <iostream>
#include <vector>
using namespace std;

int static counter = 0;
int Fib(int n)
{
    int fibList[100];
    fibList[0] = 0;
    fibList[1] = 1;
    for (int index = 2; index <= n; index++)
    {
        counter++;
        fibList[index] = fibList[index - 1] + fibList[index - 2];
    }
    return fibList[n];
};

int main()
{
    int number = 7;
    cout << "The Result of Sequence IS: " << Fib(number) << endl;
    cout << "Counter = " << counter << endl;
    return 0;
}