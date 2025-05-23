#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle
{
public:
    void triangle()
    {
        cout << "I am a triangle\n";
    }
};

class Isosceles : public Triangle
{
public:
    void isosceles()
    {
        cout << "I am an isosceles triangle\n";
    }
};

class Equilateral : public Isosceles
{
public:
    void equilateral()
    {
        cout << "I am an equilateral triangle" << endl;
    }
};

// Write your code here.

int main()
{

    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}

/*  "Multi Level Inheritance":-

In this challenge, we explore multi-level inheritance. Suppose, we have a class A which is the base class and we have a class B which is derived from class A and we have a class C which is derived from class B, we can access the functions of both class A and class B by creating an object for class C. Hence, this mechanism is called multi-level inheritance. (B inherits A and C inherits B.)

Create a class called Equilateral which inherits from Isosceles and should have a function such that the output is as given below.

"Sample Output":-
I am an equilateral triangle
I am an isosceles triangle
I am a triangle
*/