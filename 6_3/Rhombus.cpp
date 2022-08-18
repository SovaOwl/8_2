#include "Rhombus.h"
#include "Shape error.h"
Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) : Rhombus(a, b, c, d, A, B, C, D, "Rhombus:")
{}

Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D, const string& figure_name) : Parallelogram(a, b, c, d, A, B, C, D, figure_name)
{
    if (a != b || a != c || a != d || A != C || A != B || B != C || C != D)
    {
        get_negative_info();
        throw Shape_error("Cause: All sides are not equal to each other and/or angles A, C and B, D are pairwise not equal");
    }

    else
    {
        get_positive_info();
    }
}