#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int a, b;
    cin >> a;
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            switch (i)
            {
            case 0:
                cout << "zero" << endl;
                break;

            case 1:
                cout << "one" << endl;
                break;

            case 2:
                cout << "two" << endl;
                break;

            case 3:
                cout << "three" << endl;
                break;

            case 4:
                cout << "four" << endl;
                break;

            case 5:
                cout << "five" << endl;
                break;

            case 6:
                cout << "six" << endl;
                break;

            case 7:
                cout << "seven" << endl;
                break;

            case 8:
                cout << "eight" << endl;
                break;

            case 9:
                cout << "nine" << endl;
                break;
            }
        }
        else if (i > 9 && i % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
    return 0;
}

/* "For Loop":-

"Input Format":-
You will be given two positive integers. a and b (a <= b) separated by a newline.

"Output Format":-
For each integer n in the inclusive interval [a, b]:
If 1<=n<=9 , then print the English representation of it in lowercase. That is "one" for 1. "two" for 2 and so on.
Else if n > 9 and it is an even number , then print "even".
Else if n > 9 and it is an odd number,  then print "odd".

# Sample Input
8
11

#Sample Output
eight
nine
even
odd
*/