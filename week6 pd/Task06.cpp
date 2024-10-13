#include <iostream>
using namespace std;
string calcPrice (string month, int numberOfStays);

int main ()
{
    string month, result;
    int numberOfStays;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> numberOfStays;
   
    result =  calcPrice (month, numberOfStays);
    cout << result;
    return 0;
}


string calcPrice (string month, int numberOfStays)
{
    string result;
    float studioPrice, apartmentPrice;
    if ( month== "may" || month== "october")
    {
        studioPrice = numberOfStays*50 ;
        apartmentPrice = numberOfStays*65 ;
        if ( (numberOfStays > 7) && ( numberOfStays <= 14) )
        {
            studioPrice = studioPrice - (studioPrice*0.05);
        }
        else if ( numberOfStays > 14 )
        {
            studioPrice = studioPrice - (studioPrice*0.30);
        } 
    }
    else if ( month== "june" || month== "september")
    {
        studioPrice = numberOfStays*75.20 ;
        apartmentPrice = numberOfStays*68.70 ;
        if ( numberOfStays > 14 )
        {
            studioPrice = studioPrice - (studioPrice*0.20);
        }
    }
    else if ( month== "july" || month== "august")
    {
        studioPrice = numberOfStays*76 ;
        apartmentPrice = numberOfStays*77 ;
    }

    if ( numberOfStays>14)
    {
        apartmentPrice = apartmentPrice - (apartmentPrice*0.1) ;
    }

    result = "Apartment: "+ to_string (apartmentPrice) + "$  \nStudio: " +to_string(studioPrice)+ "$";
    return result; 
     
}
