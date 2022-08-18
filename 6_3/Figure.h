#pragma once
#include <iostream>
#include <string>

using namespace std;

#pragma once
#include <string>

using namespace std;

class Figure
{
protected:
    Figure(int side_count, const string& figure_name = "Figure:");
    int field;
    string figure_name;

public:
    Figure();

    virtual void get_positive_info();
    virtual void get_negative_info();
};