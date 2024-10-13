#include <iostream>
using namespace std;
string grade( double percentage);
main()
{
    int eng,math,chem,sst,bio;
    double percentage;
    string final_result,name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter marks in English: ";
    cin>>eng;
    cout<<"Enter marks in math: ";
    cin>>math;
    cout<<"Enter marks in chemistry: ";
    cin>>chem;
    cout<<"Enter marks in social sciences: ";
    cin>>sst;
    cout<<"Enter marks in biology: ";
    cin>>bio;
    percentage = ((eng+math+chem+sst+bio)*100)/500;
    final_result=grade( percentage);
    cout<<"  name: "<<name<<endl;
    cout<<"percentage is: "<<percentage<<endl;
    cout<<"your grade is : "<<final_result;
}

string grade(double percentage)
{
    string result;
   if(percentage<=40)
   {
     result = 'F';
   }
   if(percentage >40 && percentage <= 50)
   {
    result = 'D';
   }
   if(percentage>50 &&percentage<=60)
   {
    result = 'C';
   }
   if(percentage>60 && percentage<=70)
   {
    result = 'B';
   }
   if(percentage>70 && percentage<=80)
   {
    result = "B+";
   }
   if(percentage>80 && percentage<=90)
   {
    result = "A";
   }
   if(percentage>90 && percentage<=100)
   {
    result = "A+";
   }
   return result;
}