#include "Isosceles_triangle .h"
#include "Shape error.h"

Isosceles_triangle::Isosceles_triangle(int a, int b, int c, int A, int B, int C) :Isosceles_triangle(a, b, c, A, B, C, "Isosceles triangle:")
{}

Isosceles_triangle::Isosceles_triangle(int a, int b, int c, int A, int B, int C, const string& figure_name) : Triangle(a, b, c, A, B, C, figure_name)
{
    if (a != c || A != C)
    {
        get_negative_info();
        throw Shape_error("Reason: Sides a and c are not equal to each other and (or) angles A and C are not equal to each other");
    }

    else
    {
        get_positive_info();
    }
}
