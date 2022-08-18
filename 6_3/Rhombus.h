#pragma once
#include "Parallelogram.h"
class Rhombus :public Parallelogram
{
private:
    Rhombus(int a, int b, int c, int d, int A, int B, int C, int D, const string& figure_name);

public:
    Rhombus(int a, int b, int c, int d, int A, int B, int C, int D);
};