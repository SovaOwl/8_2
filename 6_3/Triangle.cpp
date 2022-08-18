#include "Triangle.h"
#include "Shape error.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C, "Triangle:")
{}

Triangle::Triangle(int a, int b, int c, int A, int B, int C, const string& figure_name) : Figure(3, figure_name)
{
    this->a = a, this->b = b, this->c = c, this->A = A, this->B = B, this->C = C;

    if ((A + B + C) != 180)
    {
        get_negative_info();
        throw Shape_error("Reason: sum of angles is not equal to 180");
    }
    else if (figure_name == "Triangle:")
    {
        get_positive_info();
    }
}

void Triangle::get_positive_info()
{
    cout << figure_name << "(Parties: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << "; ";
    cout << " Corners: " << "A=" << A << " " << "B=" << B << " " << "C=" << C << ") Created" << endl << endl;

}
void Triangle::get_negative_info()
{
    cout << figure_name << "(Parties: " << "a=" << a << " " << "b=" << b << " " << "c=" << c << ";";
    cout << " Corners: " << "A=" << A << " " << "B=" << B << " " << "C=" << C << ") Not created" << endl << endl;
}