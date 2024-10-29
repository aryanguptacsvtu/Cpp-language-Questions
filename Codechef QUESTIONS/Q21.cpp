#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        // your code goes here

        int total_cost = 0;

        for (int i = 0; i < n; i++)
        {

            if (a[i] >= x)
            {
                total_cost = total_cost + b[i];
            }
        }
        cout << total_cost << endl;
    }
}


/*   "Cost of Groceries":-

Chef visited a grocery store for fresh supplies. There are N items in the store where the ith item has a freshness value Ai​ and cost Bi.
Chef has decided to purchase all the items having a freshness value greater than equal to X. Find the total cost of the groceries Chef buys.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers N and X — the number of items and the minimum freshness value an item should have.
The second line contains N space-separated integers, the array 
A, denoting the freshness value of each item.
The third line contains N space-separated integers, the array 
B, denoting the cost of each item.

"Output Format":-
For each test case, output on a new line, the total cost of the groceries Chef buys.*/
