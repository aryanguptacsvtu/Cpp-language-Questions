#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // your code goes here

        int original_cost = 0;
        int discounted_price = 0;

        for (int i = 0; i < n; i++)
        {
            original_cost = original_cost + a[i];
        }

        for (int i = 0; i < n; i++)
        {
            a[i] = max(a[i] - y, 0);
            discounted_price = discounted_price + a[i];
        }

        if (discounted_price + x < original_cost)
        {
            cout << "Coupon" << endl;
        }

        else
        {
            cout << "No Coupon" << endl;
        }
    }
}


/*   "Take discount or Not":-

There are N items in a shop. You know that the price of the i-th item is Ai. Chef wants to buy all the N items.
There is also a discount coupon that costs X rupees and reduces the cost of every item by Y rupees. If the price of an item was initially ≤Y, it becomes free, i.e, costs 0.
Determine whether Chef should buy the discount coupon or not. Chef will buy the discount coupon if and only if the total price he pays after buying the discount coupon is strictly less than the price he pays without buying the discount coupon.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.Each test case consists of two lines of input.
The first line of the test case contains three space-separated integers —N, X, and Y.
The second line contains N space-separated integers — A1,A2,…,AN.
​
"Output Format":_
For each test case, output COUPON if Chef should buy the discount coupon, and NO COUPON otherwise.
Each letter of the output may be printed in either lowercase or uppercase. For example, the strings coupon, CouPoN, and COUPON will all be treated as equivalent.*/