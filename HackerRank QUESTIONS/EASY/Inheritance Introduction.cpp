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
    void description()
    {
        cout << "In an isosceles triangle two sides are equal" << endl;
    }
    // Write your code here.
};

int main()
{
    Isosceles isc;
    isc.isosceles();
    isc.description();
    isc.triangle();

    return 0;
}

/* "Inheritance Introduction":-

The class Triangle has a function called triangle(). Now we create a class derived from the base class Triangle called Isosceles.
class Isosceles : public Triangle{....}

Now we can create a derived class object and use it to access the functions of the base class.
int main(){ Isosceles isc....}

"Sample Output":-
I am an isosceles triangle
In an isosceles triangle two sides are equal
I am a triangle
*/