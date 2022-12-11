#include "pizza.h"

char* pizza_chicken::pizza_type()
{
    return "Chicken";
}

char* pizza_beef::pizza_type()
{
    return "Beef";
}

char* pizza_cheese::pizza_type()
{
    return "Cheese";
}

void pizza::make_pizza()
{
    make_dough();
    add_toppings();
    bake();
    cout<<pizza_type()<<" pizza is ready !"<<endl;
}
