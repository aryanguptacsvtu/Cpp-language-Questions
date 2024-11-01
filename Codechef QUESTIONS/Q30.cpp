#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    int X;
    string S;

    cin >> T;

    while (T--)
    {
        cin >> X;
        cin >> S;

        int count_C = 0;
        int count_D = 0;
        int count_N = 0;
        int n = S.size();

        for (int i = 0; i < n; i++)
        {
            if (S[i] == 'C')
            {
                count_C++;
            }
            else if (S[i] == 'N')
            {
                count_N++;
            }
            else
            {
                count_D++;
            }
        }

        int Chef_score = count_D + (count_N * 2);
        int Carlsen_score = count_D + (count_C * 2);

        if (Carlsen_score > Chef_score)
        {
            cout << 60 * X << endl;
        }
        else if (Carlsen_score < Chef_score)
        {
            cout << 40 * X << endl;
        }
        else
        {
            cout << 55 * X << endl;
        }
    }
}

/*   "World Chess Championship":-

The World Chess Championship 2022 is about to start. 14 Classical games will be played between Chef and Carlsen in the championship, where each game has one of three outcomes — it can be won by Carlsen, won by Chef, or it can be a draw. The winner of a game gets 2 points, and the loser gets 0 points. If it’s a draw, both players get 1 point each.
The total prize pool of the championship is 100⋅X.
At end of the 14 Classical games, if one player has strictly more points than the other, he is declared the champion and gets 60⋅X as his prize money, and the loser gets 40⋅X.
If the total points are tied, then the defending champion Carlsen is declared the winner. However, if this happens, the winner gets only 55⋅X, and the loser gets 45⋅X.
Given the results of all the 14 games, output the prize money that Carlsen receives.
The results are given as a string of length 14 consisting of the characters C, N, and D.
C denotes a victory by Carlsen.
N denotes a victory by Chef.
D denotes a draw.


"Input Format":-
The first line of input contains an integer T, denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains one integer X, denoting that the total prize pool is 100⋅X.
The second line contains the results of the match, as a string of length 14 containing only the characters C, N, and D.

"Output Format":-
For each test case, output in a single line the total prize money won by Carlsen.*/