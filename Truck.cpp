#include "Truck.h"
#include <iostream>
#include <string>
using namespace std;

Truck::Truck()
{
    name = "";
    code = 0;
}
Truck::Truck(int b_code, std::string b_name)
{
    code = b_code;
    name = b_name;
}
std::string Truck::get_brand_name()
{
    return name;
}
int Truck::get_brand_code()
{
    return code;
}
Truck::~Truck()
{
}