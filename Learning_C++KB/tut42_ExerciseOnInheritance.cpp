#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class simpleCalculator
{
public:
    int sum(int a, int b)
    {
        cout << "The sum of the " << a << " and " << b << " is " << a + b << endl;
    }
    int subtraction(int a, int b)
    {
        cout << "The subtraction of the " << a << " and " << b << " is " << a - b << endl;
    }
    int multiplication(int a, int b)
    {
        cout << "The multiplication of the " << a << " and " << b << " is " << a * b << endl;
    }
    int division(int a, int b)
    {
        cout << "The division of the " << a << " and " << b << " is " << a / b << endl;
    }
};

class scientificCalculator
{
public:
    int factorial(int x)
    {
        if (x <= 0)
        {
            return 1;
        }
        return x * factorial(x - 1);
    }
    int squareRoot(int x)
    {
        cout << "The square root of " << x << " is " << sqrt(x) << endl;
    }
    int raise(int x, int y)
    {
        // cout<<x<<" ^ "<<y<<" is "<<pow(double(x),double(y))<<endl;  OR 👇
        cout << x << " ^ " << y << " is " << (int)pow(x, y) << endl;
    }
    int inverse(int x)
    {
        cout << "The inverse of " << x << " is " << 1 / double(x) << endl;
    }
};

class hybridCalculator : public simpleCalculator,public scientificCalculator{

};
int main()
{
    int a, b, f1, c, d, f3;
    char f2;
    cout << "Which calculator do you want to use?\nPress 1 for simple\nPress 2 for Scientific\n"
         << "Press 3 for Hybrid" << endl;
    cin >> f1;
    if (f1 == 1)
    {
        cout << "You have choosen for simple calculator" << endl;
        cout << "Enter first number ";
        cin >> a;
        cout << "Enter action to be performed ";
        cin >> f2;
        cout << "Enter second number ";
        cin >> b;
        simpleCalculator calci;
        if (f2 == '+')
        {
            calci.sum(a, b);
        }
        if (f2 == '-')
        {
            calci.subtraction(a, b);
        }
        if (f2 == '*')
        {
            calci.multiplication(a, b);
        }
        if (f2 == '/')
        {
            calci.division(a, b);
        }
    }

    if (f1 == 2)
    {
        cout << "You have choosen for Scientific calculator " << endl;
        cout << "Enter Action to be performed\n1. n!\n2. SquareRoot(n)\n3. n1^n2\n4. 1/n1" << endl;
        cin >> f3;
        scientificCalculator Alian;
        if (f3 == 1)
        {
            cout << "Enter number ";
            cin >> c;
            cout << "The factorial of " << c << " is " << Alian.factorial(c) << endl;
        }
        if (f3 == 2)
        {
            cout << "Enter number ";
            cin >> c;
            Alian.squareRoot(c);
        }
        if (f3 == 3)
        {
            cout << "Enter first number ";
            cin >> c;
            cout << "Enter second number ";
            cin >> d;
            Alian.raise(c, d);
        }
        if (f3 == 4)
        {
            cout << "Enter number ";
            cin >> c;
            Alian.inverse(c);
        }
        
    }
    
    if(f1==3){
        hybridCalculator alianOfMars;
        cout << "You have choosen for simple calculator" << endl;

    }
    return 0;
}