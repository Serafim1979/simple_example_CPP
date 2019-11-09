#include<iostream>
#include<cmath>
#include"example.h"

using namespace std;
///////////////////////////////////////////////////////////
float finding_discriminant(float a, float b, float c)
{
    return (b*b)-(4*a*c);
}
///////////////////////////////////////////////////////////
bool finding_leap_year(int year)
{
    bool flag;
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
                flag = true;
            else
                flag = false;
        }
        else
            flag = true;
    }
    else
        flag = false;
    return flag;
}
///////////////////////////////////////////////////////////
int finding_sum_of_natural_numbers(int lim)
{
    int sum = 0;
    for(int i = 1; i <= lim; ++i)
    {
        sum += i;
    }
    return sum;
}
///////////////////////////////////////////////////////////

