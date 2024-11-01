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
        int d[n];

        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }

        bool isNonDecreasing = true;   // Assume the order is non-decreasing initially

        for (int i = 0; i < n - 1; i++)
        {
            if (d[i] > d[i + 1])
            {
                isNonDecreasing = false;
                break; 
            }
        }

        if (isNonDecreasing)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}


/*   "Difficulty Rating Order":-

Our Chef has some students in his coding class who are practicing problems. Given the difficulty of the problems that the students have solved in order, help the Chef identify if they are solving them in non-decreasing order of difficulty. Non-decreasing means that the values in an array is either increasing or remaining the same, but not decreasing. That is, the students should not solve a problem with difficulty d1, and then later a problem with difficulty d2, where d1 >d2


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of 2 lines of input.
The first line contains a single integer N, the number of problems solved by the students
The second line contains N space-separate integers, the difficulty ratings of the problems attempted by the students in order.

"Output Format":-
For each test case, output in a new line “Yes” if the problems are attempted in non-decreasing order of difficulty rating and “No” if not. The output should be printed without the quotes.
Each letter of the output may be printed in either lowercase or uppercase. For example, the strings yes, YeS, and YES will all be treated as equivalent.*/