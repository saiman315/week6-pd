#include <iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);

int main ()
{
    int examHour, examMinute, studentHour, studentMinute;
    string result;
    cout << "Enter exam starting hour: ";
    cin >> examHour;
    cout << "Enter exam starting minutes: ";
    cin >> examMinute;
    cout << "Enter student's hour of arrival: ";
    cin >> studentHour;
    cout << "Enter student's minutes of arrival: ";
    cin >> studentMinute;
   
    result =  checkStudentStatus( examHour,  examMinute,  studentHour, studentMinute);
    cout << result;
    return 0 ;
}


string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
    string arrival , result;
    int studentMinute2 , studentHour2, hoursDifference, minutesDifference;

    studentMinute2 = studentMinute+30;
        if ( studentMinute2 >= 60)
        {
            studentMinute2 = studentMinute - 60 ;
            studentHour2 = studentHour + 1 ;
        }

    if ( (studentHour > examHour) || ( (studentHour == examHour) && ( studentMinute > examMinute) ) ) 
    {
        arrival = "Late.";
    }
    else if ( (( examHour==studentHour) && ( examMinute==studentMinute )) || ((studentMinute2==examMinute) && (studentHour2==studentHour)) )
    {
        arrival = "On Time.";   
    }
    else if ( (studentHour2 < examHour) || ((studentHour2 == examHour) && (studentMinute2 < examMinute )) )
    {
        arrival = "Early.";
    }

    if (arrival == "Late.")
    {
        minutesDifference = studentMinute-examMinute;
        hoursDifference = studentHour-examHour;
        if (minutesDifference<0)
        {
            minutesDifference = minutesDifference+60;
            hoursDifference = hoursDifference - 1 ;
        }
        result = arrival+ " \n"+ to_string (hoursDifference)+ ":" + to_string (minutesDifference)+ " hours after the exam.";
    }
    else if (arrival == "Early.")
    {
        minutesDifference = examMinute-studentMinute;
        hoursDifference = examHour-studentHour;
        if (minutesDifference<0)
        {
            minutesDifference = minutesDifference+60;
            hoursDifference = hoursDifference - 1 ;
        }
        result = arrival+ " \n"+ to_string (hoursDifference)+ ":" + to_string (minutesDifference)+ " hours before the exam.";
    }
    else if (arrival == "On Time.")
    {
        result = arrival;
    }
    return result;
}