#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> C;

        if ((A % 2 == 0 && C % 2 == 0) or (A % 2 != 0 && C % 2 != 0))
        {
            B = (A + C) / 2;
            cout << B << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}


/*  "Make Avg":-

You are given 2 integers - A and C.You need to find if there exists an integer B which meets the following condition:
B must be an integer.
B is the average of A and C.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers A and C, the given integers.

"Output Format"
For each test case, output −1 if there exists no integer B which is the average of A and C. Else, output the value of B.
*/