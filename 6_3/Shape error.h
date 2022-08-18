#pragma once
#include <stdexcept>

using namespace std;

class Shape_error : public invalid_argument
{
public:
	Shape_error(const string& what);
};