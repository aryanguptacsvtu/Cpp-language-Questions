#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    int a[t];
    
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    sort(a, a + t);   // Sort the marks in non-decreasing(ascending) order

    for (int i = 0; i < t; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}


/*    "Simple Sorting":-
Given a list of numbers, you have to sort them in non decreasing order.


"Input Format":-
The first line contains a single integer, N, denoting the number of integers in the list.
The next N lines contain a single integer each, denoting the elements of the list.

"Output Format":-
Output N lines, containing one integer each, in non-decreasing order.*/