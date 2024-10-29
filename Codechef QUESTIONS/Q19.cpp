#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T > 0)
    {
        int N;
        cin >> N;
        int arr[N];

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int largest = arr[0];
        for (int i = 1; i < N; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
        }

        cout << largest << endl;     // Print largest number for each test case

        T--;
    }

    return 0;
}


/*   "Find maximum in an Array":-

Given a list of N integers, representing height of mountains. Find the height of the tallest mountain.


"Input Format":-
First line will contain T, number of testcases. Then the testcases follow.
The first line in each testcase contains one integer,N.
The following line contains N space separated integers: the height of each mountains.

"Output Format":-
For each testcase, output one line with one integer: the height of the tallest mountain for that test case.*/