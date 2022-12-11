#ifndef PIZZA_H
#define PIZZA_H
#include<iostream>
using namespace std;


class pizza
{
private:
    void make_dough()
    {
        cout<<"Making dough"<<endl;
    }
    void add_toppings()
    {
        cout<<"Pizza "<<pizza_type()<<" type "<<endl;
    }
    void bake()
    {
        cout<<"Baking pizza"<<endl;
    }

protected:
    virtual const char* pizza_type() = 0;
public :
    void make_pizza();
};
class pizza_chicken : public pizza
{
    make_pizza();
    char *pizza_type();
};
class pizza_beef : public pizza
{
    make_pizza();
    char *pizza_type();
};
class pizza_cheese : public pizza
{
    make_pizza();
    char *pizza_type();
};
#endif // PIZZA_H
