#pragma once
#include "Quadrilateral.h"
class Rectangle : public Quadrilateral
{
protected:
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D, const string& figure_name);

public:
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D);
};