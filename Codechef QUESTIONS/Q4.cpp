#include <iostream>
using namespace std;

int main()
{
    int num, factorial = 1;
    cin >> num;
    do
    {
        factorial = factorial * num;
        num--;
    } while (num > 0);

    cout << factorial;
    return 0;
}

/*Write a program that uses a do-while loop to find the factorial of a given number.*/