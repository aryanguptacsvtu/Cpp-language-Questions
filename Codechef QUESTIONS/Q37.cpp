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
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        string v;
        cin >> v;
        // your code goes here

        int ans = 1000;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == '0')
            {
                ans = min(s[i], ans);
            }
        }
        cout << ans << endl;
    }
}


/*   "WA Test Cases":-

Your job now is to find that smallest test case that a particular submission fails on. That problem has 
N test cases, and you are given the size of each of those test cases as S1,S2...Sn.​. You are also given a binary string V, which tells whether the submission has passed a particular test case or not. That is, if the ith bit of V is 1, that means that the submission has passed the ith test case. If it is 0, then it has failed that test case. Your job is the output the size of the smallest test case where the submission has failed.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer, N.
The second line contains N integers -S1,S2..Sn 
The third line contains a binary string - V.

"Output Format":-
For each test case, output on a new line, a single integer, which should be the size of the smallest test case where the submission has failed.*/