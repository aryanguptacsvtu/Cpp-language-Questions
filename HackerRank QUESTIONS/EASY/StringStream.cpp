#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    // Complete this function
    vector<int> numbers;
    stringstream ss(str);
    int num;
    char ch;

    while (ss >> num)
    {
        numbers.push_back(num);
        ss >> ch; // Read and discard the comma
    }

    return numbers;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}

/* "StringStream":-

"Function Description":-
Complete the parseInts function in the editor below.
'parseInts' has the following parameters:
. string str: a string of comma separated integers

"Returns":-
vector<int>: a vector of the parsed integers.
Note You can learn to push elements onto a vector by solving the first problem in the STL chapter.

The following operators/functions are commonly used here
Operator >> Extracts formatted data.
Operator << Inserts formatted data.

"Input Format":-
There is one line of n integers separated by commas.

"Sample Input":-
23,4,56

"Sample Output":-
23
4
56
*/