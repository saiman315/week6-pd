#include <iostream>
using namespace std;
string decideActivity(string temperature,string humidity);
int main()
{
  string temperature;
  cout <<"ENTER TEMPERATURE:";
  cin >> temperature;
  string humidity;
  cout <<"ENTER HUMIDITY";
  cin >> humidity;

   cout << decideActivity(temperature,humidity);

}
string decideActivity(string temperature,string humidity)
{  
     string warm,cold,dry,humid;
     if (temperature == "warm" && humidity == "dry")
     {
        return "USER SHOULD PLAY TENNIS ";
     }
     if (temperature == "warm" && humidity == "humid")
     {
        return "USER SHOULD SWIM ";
     }
     if (temperature == "cold" && humidity == "dry")
     {       
        return "USER SHOULD PLAY BASKETBALL";
     }
     if (temperature == "cold" && humidity == "humid")
     {
        return "USER SHOULD WATCH TV";
     }
     
     




}