#include <stdio.h>

int main()
{
    int t;
    int A, B, C, D, E;
    int i = 1;
    scanf("%d", &t);
    while (i <= t)
    {
        scanf("%d %d", &A, &B);
        scanf("%d %d %d", &C, &D, &E);
        printf("%d %d %d %d %d ", A, B, C, D, E);
        i = i + 1;
    }
}

/*The 1st line of input is an integer t - the count of test cases.
Each test case consists of 2 lines of input:
The 1st line of input has 2 space separated integers - accept them as variables A and B.
The 2nd line of input has 3 space separated integers - accept them as variables C, D and E.
For each test case - output all integers on a single line.*/