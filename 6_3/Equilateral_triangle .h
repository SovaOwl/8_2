#pragma once
#include "Triangle.h"
class Equilateral_triangle :public Triangle
{
private:
    Equilateral_triangle(int a, int b, int c, int A, int B, int C, const string& figure_name);

public:
    Equilateral_triangle(int a, int b, int c, int A, int B, int C);
};