#pragma once
#include "Triangle.h"

class Right_triangle :public Triangle
{
private:
    Right_triangle(int a, int b, int c, int A, int B, int C, const string& figure_name);

public:
    Right_triangle(int a, int b, int c, int A, int B, int C);
};