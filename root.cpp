/*
 * root.cpp
 *
 *  Created on: Nov 18, 2019
 *      Author: User
 */


// C++ program for implementation of Bisection Method for
// solving equations
#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.001

// An example function whose solution is determined using
// Bisection Method. The function is x^5 + x^3  + 3
double func(double x)
{
    return x*x*x*x*x + x*x*x + 3;
}

// Prints root of func(x) with error of EPSILON
void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << " a and b assumptions are wrong\n";
        return;
    }
    double c = a;
    while ((b-a) >= EPSILON)
    {
        // Find middle point
        c = (a+b)/2;
        // Check if middle point is root
        if (func(c) == 0.0)
            break;

        // Decide the side to repeat the steps
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}
// Driver program to test above function
int main()
{
    // Initial values assumed
    double a =-2, b = 2;
    bisection(a, b);
    return 0;
}



