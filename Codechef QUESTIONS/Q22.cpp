#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // your code goes here
        int min = a[0];
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (min > a[i])
            {
                min = a[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (min == a[i])
            {
                count++;
            }
        }
        cout << n - count << endl;
    }
}


/*    "MIN To MAX":-

You are given an array A of size N.Let M be the minimum value present in the array initially.
In one operation, you can choose an element Ai(1≤i≤N) and an integer (1≤X≤100), and set Ai=X.
Determine the minimum number of operations required to make M the maximum value in the array A.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer N - the size of the array.
The next line of each test case contains N space-separated integers A1,A2...An - the elements of the array.

"Output Format":-
For each test case, output on a new line, the minimum number of operations required to make M the maximum value in the array A.*/