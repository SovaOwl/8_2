#include "Equilateral_triangle .h"
#include "Shape error.h"
Equilateral_triangle::Equilateral_triangle(int a, int b, int c, int A, int B, int C) :Equilateral_triangle(a, b, c, A, B, C, "Equilateral triangle:")
{}

Equilateral_triangle::Equilateral_triangle(int a, int b, int c, int A, int B, int C, const std::string& figure_name) : Triangle(a, b, c, A, B, C, figure_name)
{
    if (a != b || a != c || A != B || A != C)
    {
        get_negative_info();
        throw Shape_error("Reason: All sides are not equal and/or all angles are not equal to 60");
    }

    else
    {
        get_positive_info();
    }
}
