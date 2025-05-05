#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    // Complete the code.
    int a;
    long l;
    char chr;
    float f;
    double d;

    cin >> a >> l >> chr >> f >> d;

    cout << a << endl;
    cout << l << endl;
    cout << chr << endl;

    // Set the precision for floating-point numbers
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << d << endl;
    return 0;
}

/* "Basic Data Types":-

"Input Format":-
Input consists of the following space-separated values: int, long, char, float, and double, respectively.

"Output Format":-
Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

"Sample Input":-
3 12345678912345 a 334.23 14049.30493

"Sample Output":-
3
12345678912345
a
334.230
14049.304930000

*/