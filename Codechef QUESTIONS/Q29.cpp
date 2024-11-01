#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore(); // Clear buffer after reading T

    while (T--)
    {
        string s;
        getline(cin,s);

        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            if (i == 0 || s[i - 1] == ' ')
            {
                s[i] = toupper(s[i]); // If current character is space, next character should be capitalized
            }
            else if (isupper(s[i]) && ( islower(s[i + 1]) || islower(s[i - 1]) ))
            {
                s[i] = tolower(s[i]); // Lowercase current character
            }
        }

        cout << s << endl;
    }

    return 0;
}


/*    "Convert String to Title Case":-

Given a string S consisting of only lowercase and uppercase English letters and spaces, your task is to convert it into title case. In title case, the first letter of each word is capitalized while the rest are in lowercase, except for words that are entirely in uppercase (considered as acronyms), which should remain unchanged.
Note:
Words are defined as contiguous sequences of English letters separated by spaces.
Acronyms are words that are entirely in uppercase and should remain unchanged.
Assume the input does not contain leading, trailing, or multiple spaces between words.


"Input Format":-
The first line contains a single integer T, the number of test cases.
Each of the next T lines contains a string S.

"Output Format":-
For each test case, print a single line containing the string S converted into title case.
*/