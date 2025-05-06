#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void fun(int a, int b)   // First Method
{
    if (a > b)
    {
        cout << a + b << endl;
        cout << a - b;
    }
    else
    {
        cout << a + b << endl;
        cout << b - a;
    }
}

// void fun(int a, int b)   {Second Method}
// {
//     cout<<(a+b)<<endl;
//     cout<<abs(a-b)<<endl;
// }

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    cin >> a;
    cin >> b;

    fun(a, b);

    return 0;
}

/* "Poniter" :-

"Function Description":-
Complete the update function in the editor below.
update has the following parameters:
int *a: an integer
int *b: an integer

"Returns":-
The function is declared with a void return type, so there is no value to return. Modify the values in memory so that a contains their sum and b contains their absoluted difference.

"Input Format":-
Input will contain two integers, a and b, separated by a newline.

"Sample Input":-
4
5

"Sample Output":-
9
1*/