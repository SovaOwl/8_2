#pragma once
#include "Rectangle.h"
class Square :public Rectangle
{
private:
    Square(int a, int b, int c, int d, int A, int B, int C, int D, const string& figure_name);
public:
    Square(int a, int b, int c, int d, int A, int B, int C, int D);
};