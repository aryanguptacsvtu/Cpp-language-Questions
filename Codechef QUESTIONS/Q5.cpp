#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    while (n != 0)
    {
        n /= 10;
        count++;
    }
    cout << count << "\n";
}

/*Given an integer N, Calculate and print the number of digits present in N.*/