#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    int a[10000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

/* "Arrays Introduction" :-

"Input Format":-
The first line of the input contains N where N is the number of integers-The next line contains N space-separated integers.

"Constraints":-
1 <= N <= 1000
1 <= A[i] <= 10000 , where A[i] is the ith integer in the array.

"Output Format":-
Print the N integers of the array in the reverse order. space-separated on a single line.

"Sample Input":-
4
1 4 3 2

"Sample Output":-
2 3 4 1
*/