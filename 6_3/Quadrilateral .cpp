#include "Quadrilateral.h"
#include "Shape error.h"
Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D, "Quadrilateral:")
{}
Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, const string& figure_name) : Figure(4, figure_name)
{
    this->a = a, this->b = b, this->c = c, this->d = d, this->A = A, this->B = B, this->C = C, this->D = D;

    if ((A + B + C + D) != 360)
    {
        get_negative_info();
        throw Shape_error("Reason: sum of angles is not equal to 360");
    }
    else if (figure_name == "Quadrilateral:")
    {
        get_positive_info();
    }

}
void Quadrilateral::get_positive_info()
{
    cout << figure_name << "(Parties: " << "a=" << a << " " << "b=" << b << " " << "c=" << c << " " << "d=" << d << "; ";
    cout << "Corners: " << "A=" << A << " " << "B=" << B << " " << "C=" << C << " " << "D=" << D << ") created" << endl << endl;

}
void Quadrilateral::get_negative_info()
{
    cout << figure_name << "(Parties: " << "a=" << a << " " << "b=" << b << " " << "c=" << c << " " << "d=" << d << "; ";
    cout << "Corners: " << "A=" << A << " " << "B=" << B << " " << "C=" << C << " " << "D=" << D << ") not created" << endl << endl;
}