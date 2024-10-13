#include <iostream>
using namespace std;
string sign(int date , string month);
main()
{
    int date;
    string month;
    string zodiac_sign;
    cout<<"Enter your date of birth: ";
    cin>>date;
    cout<<"Enter month: ";
    cin>>month;2323
    zodiac_sign=sign( date, month);
    cout<<"zodiac sign is: "<<zodiac_sign;
}


string sign(int date,string month)
{
    string zodiac;
  if((month == "march" && date>=21) || (month == "april" && date<=19))
  {
     zodiac = "Aries";
  }
  if((month == "april" && date >= 20) || (month == "may" && date <=20))
  {
    zodiac = "Taurus";
  }
  if((month == "may" && date >= 21) || (month == "june" && date <= 20))
  {
    zodiac = "Gemini";
  }
  if((month == "june" && date >= 21) || (month == "july" && date <=22))
  {
    zodiac = "Cancer";
  }
  if((month == "july" && date >= 23) || (month == "august" && date <=22))
  {
    zodiac = "Leo";
  }
  if((month == "august" && date >= 23) || (month == "september" && date <=22))
  {
    zodiac = "Virgo";
  }
  if((month == "september" && date >= 23) || (month == "october" && date <=22))
  {
    zodiac = "Libra";
  }
  if((month == "october" && date >= 23) || (month == "november" && date <=21))
  {
    zodiac = "Scorpio";
  }
  if((month == "november" && date >= 22) || (month == "december" && date <=21))
  {
    zodiac = "sagittarius";
  }
  if((month == "december" && date >= 22) || (month == "january" && date <=219))
  {
    zodiac = "Capricorn";
  }
  if((month == "january" && date >= 20) || (month == "february" && date <=18))
  {
    zodiac = "Aquarius";
  }
  return zodiac;
}