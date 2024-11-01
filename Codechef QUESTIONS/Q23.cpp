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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        // your code goes here

        int count = 0;

        for (int i = 0; i < n; i++)
        {

            if (a[i] <= 2 * b[i] && b[i] <= 2 * a[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}


/*   "Running Comparison":-

Alice and Bob recently got into running, and decided to compare how much they ran on different days.
They each ran for N days — on the ith day, Alice ran Ai meters and Bob ran Bi meters.
On each day,
Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.
Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of three lines of input.
The first line of each test case contains a single integer N — the number of days.
The second line of each test case contains N space-separated integers A1,A2...An — the distances run by Alice on the N days.
The third line of each test case contains N space-separated integers  B1,B2...Bn — the distances run by Bob on the N days.

"Output Format":-
For each test case, output on a new line the number of days when both Alice and Bob were "happy".*/