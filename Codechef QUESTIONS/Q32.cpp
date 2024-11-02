#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count++;
                if (count == 3)
                {
                    cout << "Happy\n";
                    break;
                }
            }
            else
            {
                count = 0;
            }
        }
        if (count != 3)
        {
            cout << "Sad\n";
        }
    }
    return 0;
}


/*   "Chef and Happy String":-

Chef has a string S with him. Chef is happy if the string contains a contiguous substring of length strictly greater than 2 in which all its characters are vowels.Determine whether Chef is happy or not.
Note that, in english alphabet, vowels are a, e, i, o, and u.


"Input Format":-
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, a string S.

"Output Format":-
For each test case, if Chef is happy, print HAPPY else print SAD.
You may print each character of the string in uppercase or lowercase (for example, the strings hAppY, Happy, haPpY, and HAPPY will all be treated as identical).*/