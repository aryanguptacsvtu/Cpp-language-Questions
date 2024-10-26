#include <iostream>
using namespace std;

int main()
{
    string name1, name2;
    int marks1, marks2;

    cin >> name1 >> name2;
    cin >> marks1 >> marks2;

    if (marks1 > marks2)
    {
        cout << name1;
    }
    else if (marks2 > marks1)
    {
        cout << name2;
    }
    else
    {
        cout << "equal";
    }
}

/*
Write a program to input two student's names and percentages and print the name of the student with the higher percentage. In case they score equal percentages, print 'equal'.*/