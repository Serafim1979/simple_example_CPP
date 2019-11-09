#include<iostream>
#include<cmath>
#include"example.h"

using namespace std;

int main()
{
    float a, b, c, x1, x2, discrim, real_part, img_part;
    cout << "Enter the coefficients a, b and c: ";
    cin >> a >> b >> c;
    discrim = finding_discriminant(a, b, c);

    if(discrim > 0)
    {
        x1 = (-b + sqrt(discrim)) / (2*a);
        x2 = (-b - sqrt(discrim)) / (2*a);
        cout << "Roots are real and they are different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if(discrim == 0)
    {
        cout << "Roots are real and the same." << endl;
        x1 = (-b + sqrt(discrim)) / (2*a);
        cout << "x1 = x2 = " << x1 << endl;
    }
    else
    {
       real_part = -b /(2 * a);
       img_part = sqrt(-discrim)/(2*a);
       cout << "Roots are complex and different." << endl;
       cout << "x1 = " << real_part << "+" << img_part << "i" << endl;
       cout << "x2 = " << real_part << "-" << img_part << "i" << endl;
    }

    ////////////////////////////////////////////////////////////////////
    int year;
    cout << "Enter the year: ";
    cin >> year;

    if(finding_leap_year(year) == true)
        cout << "A leap year." << endl;
    else
        cout << "The year is not a leap year." << endl;
    ////////////////////////////////////////////////////////////////////
    int lim;
    cout << "Enter a positive integer: ";
    cin >> lim;

    cout << "Summa = " << finding_sum_of_natural_numbers(lim) << endl;

    ////////////////////////////////////////////////////////////////////
    int quantity;
    cout << "Enter the number of sequence elements: ";
    cin >> quantity;

    int t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Fibonacci sequence: ";

    for(int i = 1; i <= quantity; ++i)
    {
        if(i == 1)
        {
            cout << " " << t1 << " ";
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " ";
    }
    cout << endl;

    return 0;
}
