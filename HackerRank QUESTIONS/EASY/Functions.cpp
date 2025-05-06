#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fun(int a, int b, int c, int d)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }
    return max;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, d;
    int result;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    result = fun(a, b, c, d);
    cout << result;
    return 0;
}


/* "Functions" :-

"Input Format":-
Input will contain four integers - a,b,c,d , one per line.

"Output Format":-
Return the greatest of the four integers.
PS: I/O will be automatically handled.

"Sample Input":-
3
4
6
5

"Sample Output":-
6
*/