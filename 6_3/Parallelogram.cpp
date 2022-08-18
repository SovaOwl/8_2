#include "Parallelogram.h"
#include "Shape error.h"
Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D, "Parallelogram:")
{}
Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, const string& figure_name) : Quadrilateral(a, b, c, d, A, B, C, D, figure_name)
{
    if (a != c || b != d || A != C || B != D)
    {
        get_negative_info();
        throw Shape_error("Cause: Sides a,c and b,d are pairwise unequal and/or angles A,C and B,D are pairwise unequal");
    }

    else
    {
        get_positive_info();
    }
}