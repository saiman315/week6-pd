#include <iostream>
using namespace std;
float calculatefruitprice(string day,string fruit,int quantity);
main()
{
    int quantity;
    string day,fruit;
    float final_price;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    cout<<"Enter day of the week: ";
    cin>>day;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    final_price = calculatefruitprice( day, fruit, quantity);
    cout<<"The final price is: "<<final_price;
}

float calculatefruitprice(string day,string fruit,int quantity)
{
    float price;
    if(day != "sunday")
    {
        if(fruit == "banana")
        {
         price = 2.5*quantity;
        }
        if(fruit == "apple")
        {
            price = 1.2*quantity;
        }
        if(fruit == "orange")
        {
            price = 0.85*quantity;
        }
        if(fruit == "grapefruit")
        {
            price = 1.45*quantity;
        }
        if(fruit == "kiwi")
        {
            price = 2.7*quantity;
        }
        if(fruit == "pineapple")
        {
            price = 5.5 * quantity;
        }
        if(fruit == "grapes")
        {
            price = 3.85*quantity;
        }
    }
    if(day =="sunday")
    {
        if(fruit == "banana")
        {
         price = 2.7*quantity;
        }
        if(fruit == "apple")
        {
            price = 1.25*quantity;
        }
        if(fruit == "orange")
        {
            price = 0.9*quantity;
        }
        if(fruit == "grapefruit")
        {
            price = 1.6*quantity;
        }
        if(fruit == "kiwi")
        {
            price = 3*quantity;
        }
        if(fruit == "pineapple")
        {
            price = 5.6 * quantity;
        }
        if(fruit == "grapes")
        {
            price = 4.2*quantity;
        }
    }
    return price;
}