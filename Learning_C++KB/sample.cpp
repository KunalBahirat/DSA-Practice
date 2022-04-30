#include <iostream>
using namespace std;
int main(){
    double a=2;
    cout<<a;
    return 0;
}

// #include <iostream>
// #include <cmath>
// using namespace std;
// class scientificCalculator
// {
// public:
//     int factorial(int x)
//     {
//         if (x <= 0)
//         {
//             return 1;
//         }
//         return x * factorial(x - 1);
//     }
//     int squareRoot(int x)
//     {
//         cout << "The square root of " << x << " is " << sqrt(x) << endl;
//     }
//     int raise(int x, int y)
//     {
//         // cout<<x<<" ^ "<<y<<" is "<<pow(double(x),double(y))<<endl;  OR 👇
//         cout << x << " ^ " << y << " is " << (int)pow(x, y) << endl;
//     }
//     int inverse(int x)
//     {
//         cout << "The inverse of " << x << " is " << 1 / double(x) << endl;
//     }
// };

// int main()
// {
//     int c, d, f3;
//     cout << "Enter Action to be performed\n1. n!\n2. SquareRoot(n)\n3. n1^n2\n4. 1/n1" << endl;
//     cin >> f3;
//     scientificCalculator Alian;

//         if (f3 == 1)
//         {
//             cout << "Enter number ";
//             cin >> c;
//             cout << "The factorial of " << c << " is " << Alian.factorial(c) << endl;
            
//         }
//         if (f3 == 2)
//         {
//             cout << "Enter number ";
//             cin >> c;
//             Alian.squareRoot(c);
//         }
//         if (f3 == 3)
//         {
//             cout << "Enter first number ";
//             cin >> c;
//             cout << "Enter second number ";
//             cin >> d;
//             Alian.raise(c, d);
//         }
//         if (f3 == 4)
//         {
//             cout << "Enter number ";
//             cin >> c;
//             Alian.inverse(c);
//         }
//         if(f3>4){
//             cout<<"Enter correct action "<<endl;
//         }
    

//     return 0;
// }