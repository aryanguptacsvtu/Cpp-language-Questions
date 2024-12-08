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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // your code goes here
        sort(a, a + n);

        int passing_mark;  // Determine the passing mark
        if (x == n)
        {
            passing_mark = a[0] - 1;    // If all students pass, the passing mark should be below the lowest mark
        }
        else
        {
            passing_mark = a[n - x] - 1; // Otherwise, passing mark is just below the score of (N - X)-th student
        }

        cout << passing_mark << endl;
    }
}


/*     "Passing Marks":-

In a class of N students, a class test was held. The ith student scored Ai marks. It is also known that the scores of all students were distinct.
A student passes the test if their score is strictly greater than the passing mark. Given that exactly X students pass in the test, find the maximum value of the passing mark of the test.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers N and X — the number of students in the class and the number of students that passed in the test.
The next line contains N space-separated integers A1,A2...An, where the ith integer denotes the marks of the ith student.

"Output Format":-
For each test case, output on a new line, the maximum value of the passing mark of the test.*/