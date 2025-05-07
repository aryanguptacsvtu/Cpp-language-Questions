#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student
{
public:
    int scores[5];
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> scores[i];
        }
    }

    int calculateTotalScore()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum = sum + scores[i];
        }
        return sum;
    }
};

int main()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score)
        {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}

/* "Classes and Objects":-

Create a class named 'Student' with the following specifications:
. An instance variable named scores to hold a student's 5 exam scores.
. A void input() function that reads 5 integers and saves them to scores.
. An int calculateTotalScore() function that returns the sum of the student's scores.

"Input Format":-
Most of the input is handled for you by the locked code in the editor.
In the void Student::input() function. you must read 5 scores from stdin and save them to your
scores instance variable.

"Output Format":-
In the int Student::calculateTotalScore() function, you must return the student's total grade (the sum of the values in scores).
The locked code in the editor will determine how many scores are larger than Kristen's and print that number to the console.

"Sample Input":-
3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10

"Sample Output":-
1

"Explanation":-
Kristen's grades are on the first line of grades. Only 1 student scored higher than her.
*/