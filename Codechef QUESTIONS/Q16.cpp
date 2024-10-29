#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X;
        cin >> X;

        if (X > 100)
        {
            cout << X - 10 << endl;
        }
        else
        {
            cout << X << endl;
        }
    }
    return 0;
}

/*    "Tax in Chefland":-

In Chefland, a tax of rupees 10 is deducted if the total income is strictly greater than rupees 100.
Given that total income is X rupees, find out how much money does the Chef take home.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains a single integer X — Chef's total income.

"Output Format":-
For each test case, output on a new line, the amount of money that Chef takes home after deducting tax.*/