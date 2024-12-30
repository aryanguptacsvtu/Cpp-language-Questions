#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int N, x;

    cin >> N >> x;

    vector<int> v(N);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    replace(v.begin(), v.end(), x, x + 1);

    for (int i = 0; i < N; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}

/*     "Operations on Vector":-

Given N positive integers and a value x, write a program to replace all x with x + 1.


"Input Format":-
The first line of input will contain two space separated integer N and x, denoting the number of integers and a specific value, an integer.
Next line contains N space separated integers.

"Output Format":-
Replace all the occurrences of x with x+1 and print the new sequence of integers.


"NOTE"::-

"replace()":- It assigns new_value to all the elements in the range [first,last) that compare equal to old_value.

"merge()":- It is used to merge two sorted vectors into one.
            Ex:- merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
*/