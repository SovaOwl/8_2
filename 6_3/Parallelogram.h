#pragma once
#include "Quadrilateral.h"
class Parallelogram : public Quadrilateral
{
protected:
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, const string& figure_name);

public:
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);
};