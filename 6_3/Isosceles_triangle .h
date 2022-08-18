#pragma once
#include "Triangle.h"

class Isosceles_triangle :public Triangle
{
private:

    Isosceles_triangle(int a, int b, int c, int A, int B, int C, const string& figure_name);
public:
    Isosceles_triangle(int a, int b, int c, int A, int B, int C);
};