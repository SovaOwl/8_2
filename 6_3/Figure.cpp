#include "Figure.h"

Figure::Figure(int side_count, const string& figure_name) : field(side_count), figure_name(figure_name)
{}

Figure::Figure() : Figure(0)
{}
void Figure::get_positive_info()
{}
void Figure::get_negative_info()
{}