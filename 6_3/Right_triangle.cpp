#include "Right_triangle.h"
#include "Shape error.h"
Right_triangle::Right_triangle(int a, int b, int c, int A, int B, int C) : Right_triangle(a, b, c, A, B, C, "Right triangle:")
{}

Right_triangle::Right_triangle(int a, int b, int c, int A, int B, int C, const string& figure_name) : Triangle(a, b, c, A, B, C, figure_name)
{
    if (C != 90)
    {
        get_negative_info();
        throw Shape_error("Reason: Angle C is not 90 degrees");
    }
    else
    {
        get_positive_info();
    }
}