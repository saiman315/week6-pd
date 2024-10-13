#include <iostream>
using namespace std;
int play(string year,int home_town, float holidays,float weekends);
main()
{
   string year;
   int home_town ,final_result;
   float holidays,weekends;
   cout<<"Enter the type of year: ";
   cin>>year;
   cout<<"Enter number of holidays: ";
   cin>>holidays;
   cout<<"Enter the number of weekends he visited home town: ";
   cin>>home_town;
   final_result= play( year, home_town ,  holidays, weekends);
   cout<<final_result;
}

int play(string year,int home_town , float holidays,float weekends)
{ 
    int result;
   weekends = 48 - home_town ;
   weekends = weekends * (0.75);
   holidays = holidays *(0.666);
   result = weekends+holidays+home_town;
   if(year == "leap")
   {
    result = result + (result*0.15);
   }
   
    return result;
}