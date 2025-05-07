#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;

    vector<int> v(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

/* "Vector-Sort":-

"Input Format":-
The first line of the input contains N, where N is the number of integers. The next line contains N integers.

"Output Format":-
Print the integers in the sorted order one by one in a single line followed by a space.

"Sample Input":-
5
1 6 10 8 4

"Sample Output":-
1 4 6 8 10

*/