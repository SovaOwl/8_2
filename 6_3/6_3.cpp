#include <iostream>
#include"Figure.h"
#include"Triangle.h"
#include"Right_triangle.h"
#include"Isosceles_triangle .h"
#include"Equilateral_triangle .h"
#include"Quadrilateral.h"
#include"Rectangle.h"
#include"Square.h"
#include"Parallelogram.h"
#include"Rhombus.h"
#include "Shape error.h"

using namespace std;

int main()
{
    try
    {
        Triangle triangle(10, 20, 30, 40, 50, 90);
    }
    catch (Shape_error& a)
    {
        cout << a.what() << endl << endl;
    }

    try
    {
        Right_triangle right_triangle(10, 20, 30, 70, 40, 70);
    }
    catch (Shape_error& a)
    {
        cout << a.what() << endl << endl;
    }

    try
    {
        Equilateral_triangle equilateral_triangle(10, 10, 10, 60, 60, 60);
    }
    catch (Shape_error& a)
    {
        cout << a.what() << endl << endl;
    }

    try
    {
        Isosceles_triangle isosceles_triangle(10, 20, 10, 65, 50, 65);
    }
    catch (Shape_error& a)
    {
        cout << a.what() << endl << endl;
    }

    try 
    {
        Quadrilateral rect(10, 20, 30, 40, 65, 75, 105, 115);
    }
    catch (Shape_error& a)
    {
        cout << a.what() << endl << endl;
    }

    try
    {
        Rectangle rectang(30, 40, 30, 40, 90, 90, 90, 90);
    }
    catch (Shape_error& a)
    {
        cout << a.what() << endl << endl;
    }

    try
    {
        Square square(20, 20, 20, 20, 90, 90, 90, 90);
    }
    catch (Shape_error& a)
    {
        cout << a.what() << endl << endl;
    }

    try
    {
        Parallelogram parallelogram(10, 20, 30, 40, 20, 40, 60, 80);
    }
    catch (Shape_error& a)
    {
        cout << a.what() << endl << endl;
    }

    try
    {
        Rhombus rhombus(10, 20, 30, 40, 20, 40, 60, 80);
    }
    catch (Shape_error& a)
    {
        cout << a.what() << endl << endl;
    }

    return 0;
}