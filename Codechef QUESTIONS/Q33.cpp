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

        string s;
        cin >> s;

        int alice_score = 0;
        int bob_score = 0;

        if (s[0] == 'A')
        {
            alice_score++;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A' && s[i + 1] == 'A')
            {
                alice_score++;
            }

            else if (s[i] == 'B' && s[i + 1] == 'B')
            {
                bob_score++;
            }
        }

        cout << alice_score << " " << bob_score << endl;
    }
    return 0;
}


/*   "Blobby Volley Scores":-

Alice and Bob are playing a game of Blobby Volley. In this game, in each turn, one player is the server and the other player is the receiver. Initially, Alice is the server, and Bob is the receiver.
Your score increases only when you win a point when you are the server.
They start with a score of 0 each, and play N turns. The winner of each of those hands is given to you as a string consisting of 'A's and 'B's. 'A' denoting that Alice won that point, and 'B' denoting that Bob won that point. Your job is the find the score of both of them after the N turns.


"Input Format":-
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains one integer N — the number of turns.
The line contains a string S of length N.
If the ith character of this string is 'A', then Alice won that point.
If the ith character of this string is 'B', then Bob won that point.

"Output Format":-
For each test case, output on a new line, two space-separated integers - Alice's final score, and Bob's final score.*/