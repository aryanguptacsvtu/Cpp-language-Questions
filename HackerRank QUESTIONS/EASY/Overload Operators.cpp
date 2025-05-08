// Operator Overloading

#include <iostream>

using namespace std;

class Complex
{
public:
    int a, b;
    void input(string s)
    {
        int v1 = 0;
        int i = 0;
        while (s[i] != '+')
        {
            v1 = v1 * 10 + s[i] - '0';
            i++;
        }
        while (s[i] == ' ' || s[i] == '+' || s[i] == 'i')
        {
            i++;
        }
        int v2 = 0;
        while (i < s.length())
        {
            v2 = v2 * 10 + s[i] - '0';
            i++;
        }
        a = v1;
        b = v2;
    }
};

// Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
Complex operator+(Complex c1, Complex c2)
{
    Complex c;
    c.a = (c1.a + c2.a);
    c.b = (c1.b + c2.b);
    return c;
}

// b) Operator << should print a complex number in the format "a+i
ostream &operator<<(ostream &outS, Complex cn)
{
    outS << cn.a << "+i" << cn.b << endl;
    return outS;
}
int main()
{
    Complex x, y;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    x.input(s1);
    y.input(s2);
    Complex z = x + y;
    cout << z << endl;
}


/* " Overload Operators":-

"Input Format":-
The overloaded operator + should receive two complex numbers (a + ib and c + id) as parameters. It must return a single complex number.
The overloaded operator << should add "a + ib" to the stream where a is the real part and b is the imaginary part of the complex number which is then passed as a parameter to the overloaded operator.

"Output Format":-
As per the problem statement, for the output, print "a + ib" followed by a newline where a= c.a and b =c.b

"Sample Input":-
3+i4
5+i6

"Sample Output":-
8+i10
*/