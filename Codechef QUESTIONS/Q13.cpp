#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    cout << *(ptr++) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(++ptr) << endl;
    cout << *(ptr--);
    return 0;
}

/*"Pointer Arithmetic":-

What will be the output of the given code snippet??*/