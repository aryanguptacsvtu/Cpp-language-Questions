#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    int N;

    cin >> N >> X;

    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    bool found = false;

    for (int i = 0; i < N; i++)
    {

        if (X == A[i])
        {

            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}


/* "Search an element in an array":-

You are given an array A of size N and an element X. Your task is to find whether the array A contains the element X or not.

`
"Input Format":-
The first line contains two space-separated integers N and X — the size of array and the element to be searched.
The second line contains all the elements of array A.

"Output Format":-
Output "YES" if the element X is present in A, otherwise output "NO".*/