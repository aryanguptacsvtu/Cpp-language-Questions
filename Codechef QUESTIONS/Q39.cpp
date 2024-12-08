#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tests, n, val;
    cin >> tests;

    vector<int> nums;

    while (tests--)
    {
        cin >> n;
        nums.clear();

        for (int i = 0; i < n; i++)
        {
            cin >> val;
            nums.push_back(val);
        }

        if (n % 3 == 0)// n is multiple of 3
        { 
            if (n % 2 == 1)  // n is odd
            { 
                cout << nums[n / 2] << endl;
            }
            else // n is even
            { 
                cout << nums.front() << " " << nums.back() << endl;
            }
        }
        else
        {
            cout << nums.front() + nums.back() << endl;
        }
    }

    return 0;
}


/*     "Vector Introduction":-

Given N integers, write a program to print:
-middle element if the N odd and is multiple of 3
-first and last element(space separated) if N is even and is multiple of 3.
-else sum of first and last element.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a positive integer N - the number of integers.
The second life each test case contains N space separated integers.

"Output Format":-
For each test case, output on a new line:
-middle element if the N odd and is multiple of 3
-space separated first and last element if N is even and is multiple of 3.
-else sum of first and last element.*/



/*  NOTE:-

"Declaration":-
vector<int> v;
vector<string> v;  // this would declare an empty vector v of strings.
vector<char> v(100);// This declaration creates a vector that can hold 100 characters.

"Size":- int sz = v.size();
"Inserting an element":- v.push_back(x); 
"Removing an element":- v.pop_back(); 

"Fetch an element":- int ith_element = v[i]; 
"First and last of vector":  
v.begin(); 
v.end();

"Clearing the vector":- v.clear()
*/
