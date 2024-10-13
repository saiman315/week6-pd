#include <iostream>
using namespace std;
float service_code(char code,char time,int minutes);
main()
{
    char code,time;
    int minutes;
    float final_price;
    cout<<"Enter service code: ";
    cin>>code;
    cout<<"Enter number of minutes used: ";
    cin>>minutes;
    final_price = service_code( code, time, minutes);
    cout<<"code: "<<code<<endl;
    cout<<"number of minutes: "<<minutes<<endl;
    cout<<final_price;
}

float service_code(char code,char time,int minutes)
{
    float price ;
   if(code == 'p')
   {
    price=25;
    cout<<"Enter time of call: ";
    cin>>time;
    if(time=='n' && minutes >100)
    {
        minutes = minutes-100;
     price=25+(minutes*0.05);
    }
    else if(time='d' && minutes >75)
    {
        minutes = minutes-75;
        price = 25+(minutes*0.10);
    }
   }
   if(code == 'r')
   {
      price = 10;
    if(minutes>50)
    {
        minutes = minutes - 50;
        price = 10+(minutes*0.2);
    }

   }
   return price;
}