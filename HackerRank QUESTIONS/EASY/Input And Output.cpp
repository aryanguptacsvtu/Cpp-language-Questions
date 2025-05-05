#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c;
    return 0;
}

/*  "Input and Output":-

"Objective":-
In this challenge, we practice reading input from stdin and printing output to stdout.
In C++, you can read a single whitespace-separated token of input using cin, and print output to stdout using cout.

"Task" :-
Read 3 numbers from stdin and print their sum to stdout.

"Input Format":-
One line that contains 3 space-separated integers: a, b, and c.

"Constraints":-
• 1 <= a, b, c <= 1000

"Output Format":-
Print the sum of the three numbers on a single line.

"Sample Input":-
127
"Sample Output":-
10
"Explanation":-
The sum of the three numbers is 1+2+7=10.

*/