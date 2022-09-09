#include<iostream>
#include "Truck.h"

using namespace std;

int main(){
    Truck truck = Truck(12,"Tank");
    cout<<truck.get_brand_code()<<" "<<truck.get_brand_name()<<endl;
    return 0;
}