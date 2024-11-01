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

        int largest = INT_MIN, secondLargest = INT_MIN;  // Initialize two variables to store largest & second largest distinct values

        for (int i = 0; i < n; i++)
        {
            if (a[i] > largest)
            {
                secondLargest = largest;
                largest = a[i];
            }
            else if (a[i] > secondLargest && a[i] != largest)
            {
                secondLargest = a[i];
            }
        }

        cout << largest + secondLargest << endl;
    }

    return 0;
}


/*  "Largest and Second Largest":-

You are given an array A of N integers.
Find the maximum sum of two distinct integers in the array.
Note: It is guaranteed that there exist at least two distinct integers in the array.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains single integer N — the size of the array.
The next line contains N space-separated integers, denoting the array A.

"Output Format":-
For each test case, output on a new line, the maximum sum of two distinct integers in the array.*/