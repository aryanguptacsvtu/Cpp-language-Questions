#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int product = 1;

    while (n != 0)
    {
        sum += (n % 10);
        product = product * (n % 10);
        n /= 10;
    }
    cout << sum << " " << product << "\n";
}

/*Given an integer N, Calculate and print the sum and product of its digit.

Example:-

Input :222
Output : 6 8
Explanation:
For number = 222
sum of digits = 2 + 2 + 2 = 6
product of digits = 2 * 2 * 2 = 8 */