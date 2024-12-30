#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    vector<int> v(n + m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    if (is_sorted(a.begin(), a.end()) && is_sorted(b.begin(), b.end()))
    {
        merge(a.begin(), a.end(), b.begin(), b.end(), v.begin());
        for (int i = 0; i < n + m; i++)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        if (n > m)
        {
            reverse(a.begin(), a.end());
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }
        else
        {
            reverse(b.begin(), b.end());
            for (int i = 0; i < m; i++)
            {
                cout << b[i] << " ";
            }
        }
    }

    return 0;
}

/*      "Merge Two Sorted Vectors":-

Given two vectors of integers, merge and print them if both are sorted, else print the largest one in reverse order.

"Input Format":-
The first line of input will contain two space separated integers N and 
M, denoting the number of integers in first and second vector
Next line contains N space separated integers.
Next(third) line contains M space separated integers.

"Output Format":-
Output on a single line:
Elements of merged vector (space separated) if both the given vectors are sorted.
Else vector elements (again space separated) of larger vector in reverse order.*/