#ifndef TRUCK_YARD_H
#define TRUCK_YARD_H
#include "Truck.h"
#include <iostream>

using namespace std;

class Truck_yard
{
private:
    int t_capacity;
    Truck *trucks;

public:
    int index;
    Truck_yard();
    Truck_yard(int capacity);
    int get_total_stock_count();
    int get_stock_count(int code);
    Truck *get_current_stock_list();
    bool add_stock(Truck c);
    ~Truck_yard();

};

#endif