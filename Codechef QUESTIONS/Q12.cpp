#include <iostream>
using namespace std;

// Function to double the value of an integer using a pointer
void doubleValue(int *p)
{
    // Complete this function
    *p = 2 * (*p);
}

int main()
{
    int x;

    cin >> x;

    // Create a pointer to the integer variable
    int *ptr = &x;

    // Call the function to double the value of the integer using the pointer
    doubleValue(ptr);

    // Print the final value of the integer
    cout << x << endl;

    return 0;
}


/*"Double the Value":-

Complete the given function which doubles the value of variable x using pointer.*/