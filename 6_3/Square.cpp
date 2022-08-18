#include "Square.h"
#include "Shape error.h"
Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Square(a, b, c, d, A, B, C, D, "Square:")
{}

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D, const string& figure_name) : Rectangle(a, b, c, d, A, B, C, D, figure_name)
{
    if (a != b || a != c || a != d || A != B || A != C || A != D || A != 90)
    {
        get_negative_info();
        throw Shape_error("Reason: All sides are not equal and/or all angles are not equal to 90");
    }

    else
    {
        get_positive_info();
    }
}