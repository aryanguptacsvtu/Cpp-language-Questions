#include <iostream>
using namespace std;

// Function to reverse the elements of an array using pointers
void reverseArray(int *arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Call the function to reverse the array
    reverseArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


/*"Reverse the Array":-
Complete the given function which reverses the original array using pointers.

Input Format:-
The first line of input contain a single integer N - the size of the input array.
Next line contains N space separated integers - the elements of the array.*/