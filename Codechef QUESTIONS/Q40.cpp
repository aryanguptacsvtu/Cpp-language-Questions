#include <bits/stdc++.h>
using namespace std;
#define int long long
int mul(int x, int y)
{
    return x * y;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        partial_sum(a.begin(), a.end(), b.begin());

        int product = accumulate(b.begin(), b.end(), 1LL, mul);
        cout << product << ' ';

        int min = *min_element(a.begin(), a.end());
        int max = *max_element(a.begin(), a.end());

        if (product % min == 0 && product % max == 0)
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }
        cout << "\n";
    }
}

/*      "Operations on Vector":-

Given N positive integers, write a program to calculate the product of partial sums of the integers. Also find whether the product of partial sums is divisible by both the minimum and maximum of the given integers.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a positive integer N - the number of integers.
The second life each test case contains N space separated integers.

"Output Format":-
For each test case, output on a new line two space separated value the first value is product of partial sums.
After space, YES if final product of partial sum is divisible by both minimum and maximum integer, else NO.


"  NOTE::-
accumulate() function: It returns the result of accumulating all the values in the given range with specified initial value"

partial_sum() function: This function assigns a partial sum of the corresponding elements of a vector to every position of the second array.
*/