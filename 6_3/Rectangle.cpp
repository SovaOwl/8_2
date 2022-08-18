#include "Rectangle.h"
#include "Shape error.h"
Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) :Rectangle(a, b, c, d, A, B, C, D, "Rectangle:")
{}

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D, const string& figure_name) : Quadrilateral(a, b, c, d, A, B, C, D, figure_name)
{
    if (a != c || b != d || A != 90 || B != 90 || C != 90 || D != 90)
    {
        get_negative_info();
        throw Shape_error("Reason: Sides a,c and b,d are not equal in pairs and (or) all angles are not equal to 90");
    }

    else
    {
        get_positive_info();
    }
}