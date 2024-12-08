#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        //your code goes here
        int maxLikes = 0, maxComments = 0, maxIndex = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > maxLikes)
            {
                maxLikes = a[i];
                maxComments = b[i];
                maxIndex = i;
            }
            else if (a[i] == maxLikes && b[i] > maxComments)
            {
                maxComments = b[i];
                maxIndex = i;
            }
        }

        cout << maxIndex + 1 << endl;
    }

    return 0;
}


/*      "Facebook":-

A post on facebook is said to be more popular if the number of likes on the post is strictly greater than the number of likes on some other post. In case the number of likes is same, the post having more comments is more popular.
Given arrays A and B, each having size N, such that the number of likes and comments on the ith post are Ai and Bi respectively, Find out which post is most popular.It is guaranteed that the number of comments on all the posts is distinct.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer 
N, the number of posts.
The second line of each test case contains N space-separated integers A1,A2...An​ — where Ai is the number of likes on the ith post.
The third line of each test case contains N space-separated integers B1,B2...Bn — where Bi is the number of comments on the ith post.

"Output Format":-
For each test case, output on a new line, an integer in the range 1 to N, denoting the index of the post which is most popular among the N posts.*/