#include <iostream>
#include"pizza.h"
using namespace std;

int main()
{
    loop :
    cout<<"Enter your  choice 1 for Chicken 2 for Beef 3 for Cheese"<<endl;
    int choice;
    cin>>choice;

    pizza* pizza = NULL;
    if(choice == 1)
        pizza = new pizza_chicken;
    else if(choice == 2)
        pizza = new pizza_beef;
    else if (choice == 3)
        pizza = new pizza_cheese;
        else
        {
            cout<<"Error !!"<<endl;
            goto loop;
        }

        pizza->make_pizza();

    return 0;
}
