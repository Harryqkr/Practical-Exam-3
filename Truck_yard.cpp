#include "Truck_yard.h"
#include "Truck.h"
#include <iostream>
#include <string>

using namespace std;

Truck_yard::Truck_yard()
{
    t_capacity = 0;
    index = 0;
    trucks = NULL;
}
Truck_yard::Truck_yard(int capacity)
{
    t_capacity = capacity;
    index = 0;
    trucks = new Truck[capacity];
}
int Truck_yard::get_total_stock_count()
{
    return t_capacity;
}
int Truck_yard::get_stock_count(int code)
{
    b_code = code;
    return b_code;
}
Truck *Truck_yard::get_current_stock_list()
{
    return trucks;
}
bool Truck_yard::add_stock(Truck c)
{
    if (index < t_capacity)
    {
        trucks[index] = c;
        index++;
        return true;
    }
    return false;
}

Truck_yard::~Truck_yard()
{
}