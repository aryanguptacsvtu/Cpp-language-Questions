#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;

    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3)
    {
        cout << "Equilateral";
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        cout << "Isosceles";
    }
    else
    {
        cout << "Scalene";
    }
    return 0;
}

/*
Take the sides of a triangle as user inputs and find if the triangle is equilateral, isosceles, or scalene.

Note:
Equilateral Triangle: If all three sides of the triangle are equal, it is an equilateral triangle.
Isosceles Triangle: If at least two sides of the triangle are equal, it is an isosceles triangle.
Scalene Triangle: If all three sides of the triangle are different, it is a scalene triangle.*/