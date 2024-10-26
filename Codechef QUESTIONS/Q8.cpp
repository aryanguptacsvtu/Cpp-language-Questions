#include <stdio.h>

int main()
{
    int t;
    int N;
    int i = 1;
    scanf("%d\n", &t);
    // run a loop to accept 't' inputs
    while (i <= t)
    {
        scanf("%d", &N);
        printf("%d\n", -N);
        i = i + 1;
    }
}

/*"Number mirror - Negative integer":-

Accepts the count of test cases - t - in the 1st line
The only line of each test case consists of an integer N
You need to generate the following output - Change the sign of N.
That is, if the input is 4, output -4. If the input is -5, output 5.*/
