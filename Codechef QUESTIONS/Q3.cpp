#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        cout << i * i << " ";
        i++;
    }
    return 0;
}

/*Write a program that utilizes a while loop to print the squares of numbers from 1 to N.*/