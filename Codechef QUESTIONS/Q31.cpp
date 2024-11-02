
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string N;
        cin >> N;

        int len = N.size();
        bool carry = true;

        for (int i = len - 1; i >= 0 && carry; i--) // Traverse the string from the end to the beginning.
        {
            if (N[i] == '9')
            {
                N[i] = '0'; // Set current digit to '0' if it was '9'
            }
            else
            {
                N[i] += 1;     // Increment the current digit.
                carry = false; // No more carry needed, so stop.
            }
        }

        // If there's still carry, prepend '1' to the result.
        if (carry)
        {
            N.insert(N.begin(), '1');
        }

        cout << N << endl;
    }

    return 0;
}


/*  "Add One":-

You are given a large number N. You need to print the number N+1.
Note: The number is very large and it will not fit in standard integer data type. You have to take the input as String and then manipulate the digits to convert it to N+1.


"Input Format":-
The first line of the input contains a single integer T - the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.

"Output Format":-
For each test case, print a single line containing one integer - the number N+1.*/