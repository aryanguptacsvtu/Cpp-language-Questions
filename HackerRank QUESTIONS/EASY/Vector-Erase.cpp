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

    int x, a, b;
    cin >> x;
    cin >> a >> b;

    v.erase(v.begin() + (x - 1));
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}

/* "Vector-Erase":-

"Input Format":-
The first line of the input contains an integer N.
The next line contains N space separated integers(l-based index).
The third line contains a single integer x,denoting the position of an element that should be removed from the vector.
The fourth line contains two integers a & b denoting the range that should be erased from vector inclusive of a & exclusive of b.

"Output Format":-
Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.

"Sample Input":-
6
1 4 6 2 8 9
2
2 4

"Sample Output":-
3
1 8 9

"Explanation":-
The first query is to erase the 2nd element in the vector, which is 4. Then, modifed vector is {1 6 2 8 9}, we want to remove the range of 2~4, which means the 2nd and 3rd elements should be removed. Then 6 and 2 in the modified vector are removed and we finally get {1 8 9}
*/